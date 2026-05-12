/*
 * XREFs of StorpRegisterTraceLogging @ 0x1C006EBBC
 * Callers:
 *     RaInitializeDriver @ 0x1C006E660 (RaInitializeDriver.c)
 * Callees:
 *     StorpInitializePerfTelemetry @ 0x1C0020840 (StorpInitializePerfTelemetry.c)
 *     TraceLoggingRegisterEx @ 0x1C0070DD4 (TraceLoggingRegisterEx.c)
 */

char __fastcall StorpRegisterTraceLogging(const struct _TlgProvider_t *a1, ETWENABLECALLBACK *a2, void *a3)
{
  TLG_STATUS v3; // eax

  if ( g_StorpTraceLoggingPerformanceEnabled )
    StorpInitializePerfTelemetry();
  v3 = TraceLoggingRegisterEx(a1, a2, a3);
  if ( v3 >= 0 )
  {
    g_StorpTraceLoggingInitialized = 1;
    KeInitializeTimer(&g_StorpTraceLoggingDailyTimer);
    KeInitializeDpc(
      &g_StorpTraceLoggingDailyTimerDpc,
      (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
      0LL);
    KeSetCoalescableTimer(
      &g_StorpTraceLoggingDailyTimer,
      (LARGE_INTEGER)-6000000000LL,
      0,
      0xEA60u,
      &g_StorpTraceLoggingDailyTimerDpc);
    KeInitializeTimer(&g_StorpTraceLoggingHierarchicalResetTimer);
    KeInitializeDpc(
      &g_StorpTraceLoggingHierarchicalResetTimerDpc,
      (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
      0LL);
    LOBYTE(v3) = KeSetCoalescableTimer(
                   &g_StorpTraceLoggingHierarchicalResetTimer,
                   (LARGE_INTEGER)-138000000000LL,
                   0,
                   0x493E0u,
                   &g_StorpTraceLoggingHierarchicalResetTimerDpc);
    if ( g_StorpTraceLoggingPerformanceEnabled
      || g_StorpTraceLoggingErrorDataEnabled
      || g_StorpTraceLoggingDeviceHealthEnabled )
    {
      KeInitializeTimer(&g_StorpTraceLoggingPerformanceTimer);
      KeInitializeDpc(
        &g_StorpTraceLoggingPerformanceTimerDpc,
        (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
        0LL);
      LOBYTE(v3) = KeSetCoalescableTimer(
                     &g_StorpTraceLoggingPerformanceTimer,
                     (LARGE_INTEGER)-6000000000LL,
                     0,
                     0xEA60u,
                     &g_StorpTraceLoggingPerformanceTimerDpc);
    }
  }
  return v3;
}
