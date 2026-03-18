/*
 * XREFs of PopGetStopWatchByRequestType @ 0x14069E304
 * Callers:
 *     PopStatsMarkPowerRequestInactive @ 0x14069DEE0 (PopStatsMarkPowerRequestInactive.c)
 *     PopPausePowerRequestStats @ 0x14069E1EC (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x14069E238 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14069E29C (PopAvlDeleteStatsForPowerRequest.c)
 *     PopStatsMarkPowerRequestActive @ 0x14069E364 (PopStatsMarkPowerRequestActive.c)
 *     PopStatsNotifyAudioState @ 0x14071E2EC (PopStatsNotifyAudioState.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B73F4 (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     PoIsInitializedStopWatch @ 0x14008BB20 (PoIsInitializedStopWatch.c)
 *     PoInitializeStopWatch @ 0x1400EB4A0 (PoInitializeStopWatch.c)
 */

_QWORD *__fastcall PopGetStopWatchByRequestType(__int64 a1, int a2)
{
  __int64 *v2; // r9
  _QWORD *v3; // rbx
  __int64 **v5; // rcx
  char v6; // r8
  __int64 *v7; // r9
  __int64 v8; // r10

  v2 = &ExecutionRequiredStopWatchCollection;
  v3 = 0LL;
  if ( a2 != 3 )
    v2 = 0LL;
  if ( v2 )
  {
    v3 = (_QWORD *)(48LL * a2 + a1 + 24);
    if ( !PoIsInitializedStopWatch(v3) )
    {
      if ( v6 )
        PoInitializeStopWatch(v5, v7);
      else
        return (_QWORD *)v8;
    }
  }
  return v3;
}
