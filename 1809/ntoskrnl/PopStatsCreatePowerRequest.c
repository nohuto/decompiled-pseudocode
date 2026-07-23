/*
 * XREFs of PopStatsCreatePowerRequest @ 0x14058A234
 * Callers:
 *     PopCreatePowerRequestObject @ 0x140589F40 (PopCreatePowerRequestObject.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14058A0BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopLogPowerRequestAction @ 0x14058AC44 (PopLogPowerRequestAction.c)
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
