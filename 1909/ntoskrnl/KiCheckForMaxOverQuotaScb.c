/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x140015294
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140011F24 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140041830 (KiSearchForNewThreadOnProcessor.c)
 *     KiSchedulerApc @ 0x140081AF0 (KiSchedulerApc.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckForMaxOverQuotaScb(__int64 a1)
{
  while ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    a1 = *(_QWORD *)(a1 + 408);
    if ( !a1 )
      return 0;
  }
  return 1;
}
