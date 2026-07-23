/*
 * XREFs of PopNetIsNetworkRefreshEnabled @ 0x1408780A0
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x140878110 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140878250 (PopNetWnfLowPowerEpochCallback.c)
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
