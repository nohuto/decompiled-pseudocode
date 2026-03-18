/*
 * XREFs of PopStatsDeletePowerRequest @ 0x14069FDF8
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400EC9AC (PopPowerRequestCleanUp.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopPausePowerRequestStats @ 0x14069E1EC (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x14069E238 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14069E29C (PopAvlDeleteStatsForPowerRequest.c)
 *     PopLogPowerRequestAction @ 0x14069FE80 (PopLogPowerRequestAction.c)
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
