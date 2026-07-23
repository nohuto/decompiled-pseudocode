/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x1800880E0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x18007600C (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall RtlpCapChkTelemetryRunOnce(
        PRTL_RUN_ONCE a1,
        void (__cdecl *a2)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID),
        PVOID *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, a2, a3);
  RtlpPerformanceCounterFrequency = MEMORY[0x7FFE0300];
  return 1LL;
}
