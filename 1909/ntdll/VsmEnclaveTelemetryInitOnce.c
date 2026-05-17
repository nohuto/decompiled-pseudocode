/*
 * XREFs of VsmEnclaveTelemetryInitOnce @ 0x1800D0C00
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180007DE8 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall VsmEnclaveTelemetryInitOnce(
        __int64 a1,
        void (__stdcall *a2)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext),
        void *a3)
{
  __int64 result; // rax

  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18015F4C0, a2, a3);
  result = 1LL;
  VSMEnclaveProvidersRegistered = 1;
  return result;
}
