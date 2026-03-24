/*
 * XREFs of PopStatsNotifyPowerRequestCsState @ 0x14087B170
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF0EC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     RtlEnumerateGenericTableAvl @ 0x140134230 (RtlEnumerateGenericTableAvl.c)
 *     PopLogPowerRequestAction @ 0x140589C44 (PopLogPowerRequestAction.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14087AE1C (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x14087B05C (PopPublishAndResetPowerRequestsCollectionStats.c)
 */

void __fastcall PopStatsNotifyPowerRequestCsState(__int64 a1, char a2)
{
  char v2; // bl
  BOOLEAN i; // dl
  char *v4; // rax

  v2 = PopWnfCsEnterScenarioId;
  if ( a2 )
  {
    PopLogPowerRequestAction("CS Entry", 0LL, 0LL);
  }
  else
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
    PopLogPowerRequestAction("CS Exit", 0LL, 0LL);
    for ( i = 1; ; i = 0 )
    {
      v4 = (char *)RtlEnumerateGenericTableAvl(&PowerRequestStatsDatabase, i);
      if ( !v4 )
        break;
      PopPublishAndPurgePowerRequestStats(v4, v2);
    }
    PopPublishAndResetPowerRequestsCollectionStats(v2);
    PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
  }
}
