/*
 * XREFs of PopStatsNotifyPowerRequestCsState @ 0x1408B7768
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FC0EC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     RtlEnumerateGenericTableAvl @ 0x14010D720 (RtlEnumerateGenericTableAvl.c)
 *     PopLogPowerRequestAction @ 0x14069FE80 (PopLogPowerRequestAction.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B73F4 (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x1408B7644 (PopPublishAndResetPowerRequestsCollectionStats.c)
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
