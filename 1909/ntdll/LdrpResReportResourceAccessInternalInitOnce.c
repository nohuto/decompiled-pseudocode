/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x180082E70
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180007DE8 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall LdrpResReportResourceAccessInternalInitOnce(
        __int64 a1,
        void (__stdcall *a2)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext),
        void *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18015F450, a2, a3);
  dword_180166010 = (unsigned __int16)(__rdtsc() >> 4);
  return 1LL;
}
