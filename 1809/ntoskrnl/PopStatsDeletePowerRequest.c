/*
 * XREFs of PopStatsDeletePowerRequest @ 0x14058ABBC
 * Callers:
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopPausePowerRequestStats @ 0x14058978C (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x1405897D8 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14058983C (PopAvlDeleteStatsForPowerRequest.c)
 *     PopLogPowerRequestAction @ 0x14058AC44 (PopLogPowerRequestAction.c)
 */

void __fastcall PopStatsDeletePowerRequest(__int64 a1)
{
  char *v2; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  PopLogPowerRequestAction("Delete PowerRequest");
  v2 = *(char **)(a1 + 136);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      PopPausePowerRequestStats((__int64)v2);
      if ( !PopIsDataAccruedByPowerRequestStats((__int64)v2) )
        PopAvlDeleteStatsForPowerRequest(v2);
    }
  }
  *(_QWORD *)(a1 + 136) = 0LL;
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
