/*
 * XREFs of PopStatsCreatePowerRequest @ 0x1406B4044
 * Callers:
 *     PopCreatePowerRequestObject @ 0x1406B3EBC (PopCreatePowerRequestObject.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x140671F98 (PopLogPowerRequestAction.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406B409C (PopAvlFindOrMakeStatsForPowerRequest.c)
 */

void __fastcall PopStatsCreatePowerRequest(__int64 a1)
{
  volatile signed __int32 *StatsForPowerRequest; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  StatsForPowerRequest = (volatile signed __int32 *)PopAvlFindOrMakeStatsForPowerRequest(a1);
  if ( StatsForPowerRequest )
    _InterlockedIncrement(StatsForPowerRequest);
  *(_QWORD *)(a1 + 136) = StatsForPowerRequest;
  PopLogPowerRequestAction("Create PowerRequest", a1, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
