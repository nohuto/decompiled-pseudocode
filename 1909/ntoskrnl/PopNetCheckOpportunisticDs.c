/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x1408B3774
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1408A4938 (PopEvaluateAggressiveStandbyActions.c)
 *     PopPowerAggregatorExecuteState @ 0x1408B22EC (PopPowerAggregatorExecuteState.c)
 * Callees:
 *     <none>
 */

bool PopNetCheckOpportunisticDs()
{
  bool result; // al

  result = 0;
  if ( !PopNetBIRequestActive && !PopLidOpened )
    return dword_140443A78 == 2;
  return result;
}
