/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x140877E34
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x140869E28 (PopEvaluateAggressiveStandbyActions.c)
 *     PopPowerAggregatorWorker @ 0x140877170 (PopPowerAggregatorWorker.c)
 * Callees:
 *     <none>
 */

bool PopNetCheckOpportunisticDs()
{
  bool result; // al

  result = 0;
  if ( !PopNetBIRequestActive && !PopLidOpened )
    return dword_1404191D8 == 2;
  return result;
}
