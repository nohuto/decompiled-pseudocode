/*
 * XREFs of PopNetIsNetworkRefreshEnabled @ 0x1408B4140
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1408B41B0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408B42F0 (PopNetWnfLowPowerEpochCallback.c)
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
