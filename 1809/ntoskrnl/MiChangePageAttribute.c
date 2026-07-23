/*
 * XREFs of MiChangePageAttribute @ 0x1400EF9A0
 * Callers:
 *     MiPageAttributeBatchChangeNeeded @ 0x1400118DC (MiPageAttributeBatchChangeNeeded.c)
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiBuildMdlForMappedFileFault @ 0x14002ADD0 (MiBuildMdlForMappedFileFault.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiCoalesceFreePages @ 0x1400390D0 (MiCoalesceFreePages.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiCompletePrivateZeroFault @ 0x140047940 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1400656D0 (MiInitializeReadInProgressPfn.c)
 *     MiAssignNonPagedPoolPtes @ 0x140099220 (MiAssignNonPagedPoolPtes.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1400B55A0 (MiAllocateKernelStackPages.c)
 *     MiCopySinglePage @ 0x1400EA6A8 (MiCopySinglePage.c)
 *     MiMapPagesToZero @ 0x1400F9160 (MiMapPagesToZero.c)
 *     MiInitializePfn @ 0x1401094B0 (MiInitializePfn.c)
 *     MiFillCombinePage @ 0x140121854 (MiFillCombinePage.c)
 *     MiSetPfnOwnedAndActive @ 0x14012969C (MiSetPfnOwnedAndActive.c)
 *     MiAddExpansionNonPagedPool @ 0x14017FB0C (MiAddExpansionNonPagedPool.c)
 *     MiIncrementAweMapCount @ 0x1402B0FA4 (MiIncrementAweMapCount.c)
 *     MiBuildForkPageTable @ 0x1402C7AFC (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x1402C9BC8 (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x1409BD284 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x140082658 (MiAbortCombineScan.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400EF400 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiPageCombiningActive @ 0x1400EFB60 (MiPageCombiningActive.c)
 *     MiFlushCacheForAttributeChange @ 0x140138FC8 (MiFlushCacheForAttributeChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, unsigned int a2, char a3)
{
  char v3; // si
  unsigned __int8 v6; // di
  int v7; // r14d
  __int64 v8; // rcx
  char v9; // r8
  unsigned int v10; // eax
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_14043B868 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( (unsigned int)MiPageCombiningActive(0LL) )
  {
    MiAbortCombineScan(a1);
    v9 = *(_BYTE *)(a1 + 34);
    v3 = -5;
  }
  LOBYTE(v10) = (_BYTE)a2 << 6;
  *(_BYTE *)(a1 + 34) = ((_BYTE)a2 << 6) | v9 & 0x3F;
  if ( v7 != 3 && (v3 & 4) == 0 )
  {
    if ( (v3 & 2) != 0
      || (v8 = *(_BYTE *)(a1 + 31) & 0xF,
          _InterlockedOr(v15, 0),
          v10 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v8) & 0xF,
          v10 <= 2)
      && ((v8 & 1) != 0 || v10 < 2) )
    {
      LOBYTE(v10) = MiFlushEntireTbDueToAttributeChange(v8);
    }
    if ( a2 != 1 && v7 == 1 )
    {
      ++dword_14043B158;
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
      LOBYTE(v10) = CurrentIrql;
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
    LOBYTE(v10) = v6;
    __writecr8(v6);
  }
  return v10;
}
