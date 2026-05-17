/*
 * XREFs of LibLoaderTelemetryInitOnce @ 0x180085210
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180007DE8 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall LibLoaderTelemetryInitOnce(
        __int64 a1,
        void (__stdcall *a2)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext),
        void *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18015F418, a2, a3);
  return 1LL;
}
