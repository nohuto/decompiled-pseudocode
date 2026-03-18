/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x140876BF4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DEFEC (PopCaptureSleepStudyStatistics.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x140868BE8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopPowerAggregatorWorker @ 0x140875F30 (PopPowerAggregatorWorker.c)
 * Callees:
 *     <none>
 */

bool PopNetCheckOpportunisticDs()
{
  bool result; // al

  result = 0;
  if ( !PopNetBIRequestActive && !PopLidOpened )
    return dword_140418158 == 2;
  return result;
}
