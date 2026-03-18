/*
 * XREFs of PopBatteryCapacityToRate @ 0x1402F88A4
 * Callers:
 *     PopCalculateCsSummary @ 0x1402FB520 (PopCalculateCsSummary.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1408AAE50 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopBatteryCapacityToRate(unsigned int a1, unsigned __int64 a2)
{
  if ( a2 )
    return 3600000000u * (unsigned __int64)a1 / a2;
  else
    return 0LL;
}
