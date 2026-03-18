/*
 * XREFs of MiChangePageAttribute @ 0x1400DA6CC
 * Callers:
 *     MiAssignNonPagedPoolPte @ 0x140023870 (MiAssignNonPagedPoolPte.c)
 *     MiGetPagesToZero @ 0x14002A040 (MiGetPagesToZero.c)
 *     MiCoalesceFreePages @ 0x14002BB50 (MiCoalesceFreePages.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiAllocateKernelStackPages @ 0x14002CE10 (MiAllocateKernelStackPages.c)
 *     MiInitializeHardFaultPfn @ 0x14002E940 (MiInitializeHardFaultPfn.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MiZeroPhysicalPage @ 0x14006F000 (MiZeroPhysicalPage.c)
 *     MiInitializeReadInProgressPfn @ 0x140092AB0 (MiInitializeReadInProgressPfn.c)
 *     MiFinalizePageAttribute @ 0x140096D78 (MiFinalizePageAttribute.c)
 *     MiCompletePrivateZeroFault @ 0x1400AD7E0 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1400AF580 (MiGetPageChain.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400C4948 (MiPageAttributeBatchChangeNeeded.c)
 *     MiCopySinglePage @ 0x1400C7A2C (MiCopySinglePage.c)
 *     MiInitializePfn @ 0x1400DD7F0 (MiInitializePfn.c)
 *     MiSetPfnOwnedAndActive @ 0x140129F88 (MiSetPfnOwnedAndActive.c)
 *     MiFillCombinePage @ 0x1401428FC (MiFillCombinePage.c)
 *     MiAddExpansionNonPagedPool @ 0x140188CD4 (MiAddExpansionNonPagedPool.c)
 *     MiIncrementAweMapCount @ 0x1402D6340 (MiIncrementAweMapCount.c)
 *     MiBuildForkPageTable @ 0x1402E18F0 (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3A90 (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x1409F1D1C (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140098898 (MiAbortCombineScan.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140098A00 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiPageCombiningActive @ 0x1400DA87C (MiPageCombiningActive.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiFlushCacheForAttributeChange @ 0x14015B7C0 (MiFlushCacheForAttributeChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140465F48 == KeGetCurrentThread() )
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
      ++dword_1404657C0;
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
