/*
 * XREFs of PopStatsNotifyPowerRequestCsState @ 0x1408B7038
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     RtlEnumerateGenericTableAvl @ 0x14010CE10 (RtlEnumerateGenericTableAvl.c)
 *     PopLogPowerRequestAction @ 0x140671F98 (PopLogPowerRequestAction.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B6CC4 (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x1408B6F14 (PopPublishAndResetPowerRequestsCollectionStats.c)
 */

void __fastcall PopStatsNotifyPowerRequestCsState(__int64 a1, char a2)
{
  char v2; // bl
  BOOLEAN i; // dl
  volatile signed __int32 *v4; // rax

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
      v4 = (volatile signed __int32 *)RtlEnumerateGenericTableAvl(&PowerRequestStatsDatabase, i);
      if ( !v4 )
        break;
      PopPublishAndPurgePowerRequestStats(v4, v2);
    }
    PopPublishAndResetPowerRequestsCollectionStats(v2);
    PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
  }
}
