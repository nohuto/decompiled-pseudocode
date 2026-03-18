/*
 * XREFs of MiArePageContentsZero @ 0x1402D8DBC
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027960 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002C210 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiCreateSystemPageTable @ 0x1400961C0 (MiCreateSystemPageTable.c)
 *     MiGetLargePage @ 0x140096E20 (MiGetLargePage.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiReplenishPageSlist @ 0x1400BAF00 (MiReplenishPageSlist.c)
 *     MiLargePageFreeToZero @ 0x1400C4B30 (MiLargePageFreeToZero.c)
 *     MiCreateSharedZeroPages @ 0x1400DD580 (MiCreateSharedZeroPages.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400F8050 (MiUnlinkNodeLargePageHelper.c)
 *     MiSlistGetFreePage @ 0x140116E5C (MiSlistGetFreePage.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCheckForZeroPage @ 0x1401C84E0 (KeCheckForZeroPage.c)
 *     MiPageNotZero @ 0x1402D91A8 (MiPageNotZero.c)
 */

__int64 __fastcall MiArePageContentsZero(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v6; // r14
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v9; // rcx
  __int64 result; // rax

  v3 = BugCheckParameter2;
  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
LABEL_2:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( KeGetCurrentPrcb()->HyperPte )
  {
    while ( a2 )
    {
      if ( (*(_BYTE *)(v4 + 35) & 0x40) == 0 )
      {
        v6 = (_QWORD *)MiMapPageInHyperSpaceWorker(v3, 0LL, 0x20000000);
        if ( KeCheckForZeroPage(v6) )
          MiPageNotZero((ULONG_PTR)v6, v3);
        LOBYTE(v7) = 17;
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v6, v7, 0LL);
      }
      v4 += 48LL;
      ++v3;
      if ( (--a2 & 0x3F) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        goto LABEL_2;
      }
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v9);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
