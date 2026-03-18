/*
 * XREFs of PopNetIsNetworkRefreshEnabled @ 0x1408B3A10
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1408B3A80 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408B3BC0 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     <none>
 */

char PopNetIsNetworkRefreshEnabled()
{
  if ( (PopNetStandbyStateMask & 0x4E) != 0 )
    return 0;
  else
    return (unsigned __int8)PopNetStandbyStateMask >> 7;
}
