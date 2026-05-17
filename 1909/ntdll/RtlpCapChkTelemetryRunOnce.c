/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x1800844E0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180007DE8 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall RtlpCapChkTelemetryRunOnce(
        __int64 a1,
        void (__stdcall *a2)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext),
        void *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, a2, a3);
  RtlpPerformanceCounterFrequency = MEMORY[0x7FFE0300];
  return 1LL;
}
