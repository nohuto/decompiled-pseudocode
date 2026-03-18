/*
 * XREFs of PopStatsDeletePowerRequest @ 0x140671F10
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400D6160 (PopPowerRequestCleanUp.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x140671F98 (PopLogPowerRequestAction.c)
 *     PopPausePowerRequestStats @ 0x1406E14DC (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x1406E1528 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1406E158C (PopAvlDeleteStatsForPowerRequest.c)
 */

void __fastcall PopStatsDeletePowerRequest(__int64 a1)
{
  void *v2; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  PopLogPowerRequestAction("Delete PowerRequest");
  v2 = *(void **)(a1 + 136);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      PopPausePowerRequestStats(v2);
      if ( !(unsigned __int8)PopIsDataAccruedByPowerRequestStats(v2) )
        PopAvlDeleteStatsForPowerRequest(v2);
    }
  }
  *(_QWORD *)(a1 + 136) = 0LL;
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
