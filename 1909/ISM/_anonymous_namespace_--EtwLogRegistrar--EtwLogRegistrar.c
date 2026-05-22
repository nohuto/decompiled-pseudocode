/*
 * XREFs of _anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar @ 0x18002A938
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger__ @ 0x180001520 (_anonymous_namespace_--_dynamic_initializer_for__g_EtwLogger__.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180027BF8 (TraceLoggingRegisterEx.c)
 *     McGenEventRegister @ 0x18002A960 (McGenEventRegister.c)
 */

void *__fastcall anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar(
        __int64 a1,
        void (__stdcall *a2)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext),
        void *a3)
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1801DE450, a2, a3);
  McGenEventRegister();
  return &`anonymous namespace'::g_EtwLogger;
}
