/*
 * XREFs of MiWakeModifiedPageWriter @ 0x1401532B8
 * Callers:
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiAdjustModifiedPageLoad @ 0x1400F063C (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllPagesWorker @ 0x140153198 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x1402B3194 (MiObtainFreePages.c)
 *     MiFlushAllHintedStorePages @ 0x1402B7F34 (MiFlushAllHintedStorePages.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF20 (KeSetActualBasePriorityThread.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  __int64 v4; // r8

  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 676) )
      KeSetEvent((PRKEVENT)(a1 + 680), 0, 0);
    if ( *(_DWORD *)(a1 + 704) != 18 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 928), 18LL, v4);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 712) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 720), 0, 0);
}
