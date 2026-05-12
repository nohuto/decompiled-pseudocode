/*
 * XREFs of StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C000E860
 * Callers:
 *     <none>
 * Callees:
 *     StorpLogStatistics @ 0x1C000C494 (StorpLogStatistics.c)
 */

void __fastcall StorpTraceLoggingTelemetryTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int16 v5; // di
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KDPC *v9; // rbx
  __int64 v10; // rdx
  LARGE_INTEGER v11; // rdx
  struct _KTIMER *v12; // rcx
  ULONG v13; // r9d

  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = v6 * (int)KeQueryTimeIncrement();
  v9 = &g_StorpTraceLoggingPerformanceTimerDpc;
  v10 = v7 / 10000000;
  g_SystemUptime_s = v7 / 10000000;
  if ( Dpc == &g_StorpTraceLoggingPerformanceTimerDpc )
  {
    if ( g_StorpTraceLoggingPerformanceEnabled )
      v5 = 4;
    if ( g_StorpTraceLoggingErrorDataEnabled )
      v5 |= 0x10u;
    if ( g_StorpTraceLoggingDeviceHealthEnabled )
      v5 |= 0x80u;
    StorpLogStatistics(v5 | 0x60, v10, v7, v8);
    v11.QuadPart = -36000000000LL;
    v12 = &g_StorpTraceLoggingPerformanceTimer;
    v13 = 300000;
    goto LABEL_9;
  }
  v9 = &g_StorpTraceLoggingHierarchicalResetTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingHierarchicalResetTimerDpc )
  {
    StorpLogStatistics(3u, v10, v7, v8);
    v11.QuadPart = -138000000000LL;
    v12 = &g_StorpTraceLoggingHierarchicalResetTimer;
    v13 = 300000;
    goto LABEL_9;
  }
  v9 = &g_StorpTraceLoggingDailyTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingDailyTimerDpc )
  {
    StorpLogStatistics(8u, v10, v7, v8);
    v11.QuadPart = -864000000000LL;
    v12 = &g_StorpTraceLoggingDailyTimer;
    v13 = 900000;
LABEL_9:
    KeSetCoalescableTimer(v12, v11, 0, v13, v9);
  }
}
