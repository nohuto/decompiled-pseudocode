/*
 * XREFs of PopNetIsNetworkRefreshEnabled @ 0x140876E60
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x140876ED0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140877010 (PopNetWnfLowPowerEpochCallback.c)
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
