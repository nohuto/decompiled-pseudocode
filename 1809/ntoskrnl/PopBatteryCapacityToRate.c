/*
 * XREFs of PopBatteryCapacityToRate @ 0x1402DC538
 * Callers:
 *     PopCalculateCsSummary @ 0x1402DEA58 (PopCalculateCsSummary.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14086EAC8 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140879C40 (PopDripsWatchdogWorkerRoutine.c)
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
