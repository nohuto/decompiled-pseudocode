/*
 * XREFs of _dynamic_initializer_for__g_EndpointCharacteristicsTelemetryProviderRegistration__ @ 0x180001310
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180050384 (TraceLoggingRegisterEx.c)
 */

int __fastcall dynamic_initializer_for__g_EndpointCharacteristicsTelemetryProviderRegistration__(
        __int64 a1,
        void (__stdcall *a2)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext),
        void *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, a2, a3);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_EndpointCharacteristicsTelemetryProviderRegistration__);
}
