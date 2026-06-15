/*
 * XREFs of _dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__ @ 0x180001370
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180048A80 (TraceLoggingRegisterEx.c)
 */

int __fastcall dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__(
        __int64 a1,
        void (__stdcall *a2)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext),
        void *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1801B1488, a2, a3);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_SpatialAudioTraceLoggingProviderRegistration__);
}
