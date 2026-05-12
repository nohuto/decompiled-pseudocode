/*
 * XREFs of StorpUnRegisterTraceLogging @ 0x1C0074CD0
 * Callers:
 *     RaDeleteDriver @ 0x1C0073958 (RaDeleteDriver.c)
 * Callees:
 *     StorpUninitializePerfTelemetry @ 0x1C004FF80 (StorpUninitializePerfTelemetry.c)
 */

void StorpUnRegisterTraceLogging()
{
  if ( g_StorpTraceLoggingInitialized == 1 )
  {
    KeCancelTimer(&g_StorpTraceLoggingHierarchicalResetTimer);
    KeCancelTimer(&g_StorpTraceLoggingDailyTimer);
    if ( g_StorpTraceLoggingPerformanceEnabled
      || g_StorpTraceLoggingErrorDataEnabled
      || g_StorpTraceLoggingDeviceHealthEnabled )
    {
      KeCancelTimer(&g_StorpTraceLoggingPerformanceTimer);
    }
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C0061058 = 0;
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingInitialized = 0;
  }
}
