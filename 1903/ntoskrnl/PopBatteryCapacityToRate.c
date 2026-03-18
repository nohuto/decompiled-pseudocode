/*
 * XREFs of PopBatteryCapacityToRate @ 0x1402F8DF4
 * Callers:
 *     PopCalculateCsSummary @ 0x1402FBA70 (PopCalculateCsSummary.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1408AB5F0 (PopDripsWatchdogUpdateMetrics.c)
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
