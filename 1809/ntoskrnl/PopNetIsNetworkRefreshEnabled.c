/*
 * XREFs of PopNetIsNetworkRefreshEnabled @ 0x140876E40
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x140876EB0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140876FF0 (PopNetWnfLowPowerEpochCallback.c)
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
