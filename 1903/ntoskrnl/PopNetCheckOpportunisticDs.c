/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x1408B3EA4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FC0EC (PopCaptureSleepStudyStatistics.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1408A50F8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopPowerAggregatorExecuteState @ 0x1408B2A8C (PopPowerAggregatorExecuteState.c)
 * Callees:
 *     <none>
 */

bool PopNetCheckOpportunisticDs()
{
  bool result; // al

  result = 0;
  if ( !PopNetBIRequestActive && !PopLidOpened )
    return dword_140443B18 == 2;
  return result;
}
