/*
 * XREFs of MiChangePageAttribute @ 0x1400F218C
 * Callers:
 *     MiAssignNonPagedPoolPte @ 0x140023480 (MiAssignNonPagedPoolPte.c)
 *     MiGetPagesToZero @ 0x140029C50 (MiGetPagesToZero.c)
 *     MiCoalesceFreePages @ 0x14002B760 (MiCoalesceFreePages.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MiAllocateKernelStackPages @ 0x14002CA20 (MiAllocateKernelStackPages.c)
 *     MiInitializeHardFaultPfn @ 0x14002E550 (MiInitializeHardFaultPfn.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MiZeroPhysicalPage @ 0x14006ED90 (MiZeroPhysicalPage.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400A19C0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiFinalizePageAttribute @ 0x1400A3F48 (MiFinalizePageAttribute.c)
 *     MiInitializeReadInProgressPfn @ 0x1400A5280 (MiInitializeReadInProgressPfn.c)
 *     MiCompletePrivateZeroFault @ 0x1400CD960 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiMigratePfn @ 0x1400D3F30 (MiMigratePfn.c)
 *     MiInitializePfn @ 0x1400F00E0 (MiInitializePfn.c)
 *     MiCopySinglePage @ 0x1400F4B8C (MiCopySinglePage.c)
 *     MiSetPfnOwnedAndActive @ 0x140129568 (MiSetPfnOwnedAndActive.c)
 *     MiFillCombinePage @ 0x1401423BC (MiFillCombinePage.c)
 *     MiAddExpansionNonPagedPool @ 0x140188724 (MiAddExpansionNonPagedPool.c)
 *     MiIncrementAweMapCount @ 0x1402D65E0 (MiIncrementAweMapCount.c)
 *     MiBuildForkPageTable @ 0x1402E1B90 (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3D30 (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x1409F1E0C (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiAbortCombineScan @ 0x1400B8A28 (MiAbortCombineScan.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400B8B90 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiPageCombiningActive @ 0x1400F233C (MiPageCombiningActive.c)
 *     MiFlushCacheForAttributeChange @ 0x14015B120 (MiFlushCacheForAttributeChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, unsigned int a2, char a3)
{
  char v3; // si
  unsigned __int8 v6; // di
  int v7; // r14d
  char v8; // r8
  unsigned int v9; // eax
  char v10; // cl
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140466248 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( (unsigned int)MiPageCombiningActive(
                       0LL,
                       (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                       *(unsigned __int8 *)(a1 + 34)) )
  {
    MiAbortCombineScan(a1);
    v8 = *(_BYTE *)(a1 + 34);
    v3 = -5;
  }
  LOBYTE(v9) = (_BYTE)a2 << 6;
  *(_BYTE *)(a1 + 34) = ((_BYTE)a2 << 6) | v8 & 0x3F;
  if ( v7 != 3 && (v3 & 4) == 0 )
  {
    if ( (v3 & 2) != 0
      || (v10 = *(_BYTE *)(a1 + 31) & 0xF, _InterlockedOr(v15, 0), v9 = ((_BYTE)KiTbFlushTimeStamp - v10) & 0xF, v9 <= 2)
      && ((v10 & 1) != 0 || v9 < 2) )
    {
      LOBYTE(v9) = MiFlushEntireTbDueToAttributeChange();
    }
    if ( a2 != 1 && v7 == 1 )
    {
      ++dword_140465AC0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      MiFlushCacheForAttributeChange((a1 + 0x58000000000LL) / 48, 1LL, a2);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      LOBYTE(v9) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      v13 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v13);
    }
    LOBYTE(v9) = v6;
    __writecr8(v6);
  }
  return v9;
}
