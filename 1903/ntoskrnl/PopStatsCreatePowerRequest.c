/*
 * XREFs of PopStatsCreatePowerRequest @ 0x14069F4E4
 * Callers:
 *     PopCreatePowerRequestObject @ 0x14069F1D4 (PopCreatePowerRequestObject.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14069F35C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopLogPowerRequestAction @ 0x14069FE80 (PopLogPowerRequestAction.c)
 */

void __fastcall PopStatsCreatePowerRequest(__int64 a1)
{
  char *StatsForPowerRequest; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  StatsForPowerRequest = PopAvlFindOrMakeStatsForPowerRequest(a1);
  if ( StatsForPowerRequest )
    _InterlockedIncrement((volatile signed __int32 *)StatsForPowerRequest);
  *(_QWORD *)(a1 + 136) = StatsForPowerRequest;
  PopLogPowerRequestAction("Create PowerRequest");
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
