/*
 * XREFs of PopGetStopWatchByRequestType @ 0x1406E15F4
 * Callers:
 *     PopStatsMarkPowerRequestInactive @ 0x1406E13FC (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsMarkPowerRequestActive @ 0x1406E146C (PopStatsMarkPowerRequestActive.c)
 *     PopPausePowerRequestStats @ 0x1406E14DC (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x1406E1528 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1406E158C (PopAvlDeleteStatsForPowerRequest.c)
 *     PopStatsNotifyAudioState @ 0x14072017C (PopStatsNotifyAudioState.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B6CC4 (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     PoIsInitializedStopWatch @ 0x14008CE20 (PoIsInitializedStopWatch.c)
 *     PoInitializeStopWatch @ 0x140132D38 (PoInitializeStopWatch.c)
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
