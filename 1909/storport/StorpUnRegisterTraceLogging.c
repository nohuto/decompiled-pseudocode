/*
 * XREFs of StorpUnRegisterTraceLogging @ 0x1C0075BA0
 * Callers:
 *     RaDeleteDriver @ 0x1C007482C (RaDeleteDriver.c)
 * Callees:
 *     StorpUninitializePerfTelemetry @ 0x1C0051100 (StorpUninitializePerfTelemetry.c)
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
    dword_1C0062058 = 0;
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingInitialized = 0;
  }
}
