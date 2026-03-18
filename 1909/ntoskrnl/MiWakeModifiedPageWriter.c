/*
 * XREFs of MiWakeModifiedPageWriter @ 0x14015C9B4
 * Callers:
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiAdjustModifiedPageLoad @ 0x1400DAA78 (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllHintedStorePages @ 0x140144AC8 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x14016A7C8 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x1402C8454 (MiObtainFreePages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
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
