/*
 * XREFs of PopGetStopWatchByRequestType @ 0x1405898A4
 * Callers:
 *     PopStatsMarkPowerRequestInactive @ 0x14058966C (PopStatsMarkPowerRequestInactive.c)
 *     PopPausePowerRequestStats @ 0x14058978C (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x1405897D8 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14058983C (PopAvlDeleteStatsForPowerRequest.c)
 *     PopStatsMarkPowerRequestActive @ 0x140589904 (PopStatsMarkPowerRequestActive.c)
 *     PopStatsNotifyAudioState @ 0x1406DC96C (PopStatsNotifyAudioState.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14087C07C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     PoInitializeStopWatch @ 0x140001E48 (PoInitializeStopWatch.c)
 *     PoIsInitializedStopWatch @ 0x140001F70 (PoIsInitializedStopWatch.c)
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
