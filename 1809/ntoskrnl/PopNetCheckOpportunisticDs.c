/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x140876BD4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF0EC (PopCaptureSleepStudyStatistics.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x140868BC8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopPowerAggregatorWorker @ 0x140875F10 (PopPowerAggregatorWorker.c)
 * Callees:
 *     <none>
 */

bool PopNetCheckOpportunisticDs()
{
  bool result; // al

  result = 0;
  if ( !PopNetBIRequestActive && !PopLidOpened )
    return dword_140418118 == 2;
  return result;
}
