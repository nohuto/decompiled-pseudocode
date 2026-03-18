/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x140015164
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140011CF4 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140041AF0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSchedulerApc @ 0x1400816F0 (KiSchedulerApc.c)
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
