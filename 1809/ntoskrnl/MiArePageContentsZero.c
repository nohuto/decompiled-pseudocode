/*
 * XREFs of MiArePageContentsZero @ 0x1402BF958
 * Callers:
 *     MiCreateSystemPageTable @ 0x140026730 (MiCreateSystemPageTable.c)
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400646F0 (MiUnlinkNodeLargePageHelper.c)
 *     MiLargePageFreeToZero @ 0x14009B420 (MiLargePageFreeToZero.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     MiSlistGetFreePage @ 0x1400EB3E4 (MiSlistGetFreePage.c)
 *     MiReplenishPageSlist @ 0x1400EE420 (MiReplenishPageSlist.c)
 *     MiCreateSharedZeroPages @ 0x140109240 (MiCreateSharedZeroPages.c)
 *     MiGetPageSlist @ 0x14010CD20 (MiGetPageSlist.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCheckForZeroPage @ 0x1401C09E0 (KeCheckForZeroPage.c)
 *     MiPageNotZero @ 0x1402BFD38 (MiPageNotZero.c)
 */

__int64 __fastcall MiArePageContentsZero(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // rbp
  ULONG_PTR v3; // rdi
  unsigned __int8 CurrentIrql; // si
  _BYTE *v5; // rbx
  _QWORD *v6; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = a2;
  v3 = BugCheckParameter2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( KeGetCurrentPrcb()->HyperPte && a2 )
  {
    v5 = (_BYTE *)(48 * BugCheckParameter2 - 0x58000000000LL + 35);
    do
    {
      if ( (*v5 & 0x40) == 0 )
      {
        v6 = (_QWORD *)MiMapPageInHyperSpaceWorker(v3, 0LL, 0x20000000);
        if ( KeCheckForZeroPage(v6) )
          MiPageNotZero((ULONG_PTR)v6, v3);
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v6, 0x11u, 0LL);
      }
      v5 += 48;
      ++v3;
      --v2;
    }
    while ( v2 );
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
