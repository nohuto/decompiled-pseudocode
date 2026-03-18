/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x1400D2F34
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0F24 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400D2350 (KiQueueReadyThread.c)
 *     KiSchedulerApc @ 0x1400F17B0 (KiSchedulerApc.c)
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
