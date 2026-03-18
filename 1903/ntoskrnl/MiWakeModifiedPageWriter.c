/*
 * XREFs of MiWakeModifiedPageWriter @ 0x14015C314
 * Callers:
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiAdjustModifiedPageLoad @ 0x1400F2538 (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllHintedStorePages @ 0x1401406F8 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x140160C18 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x1402C86F4 (MiObtainFreePages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 684) )
      KeSetEvent((PRKEVENT)(a1 + 688), 0, 0);
    if ( *(_DWORD *)(a1 + 712) != 18 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 944)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 936), 18LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 944));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 720) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 728), 0, 0);
}
