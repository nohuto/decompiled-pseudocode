/*
 * XREFs of __local_stdio_printf_options @ 0x140015784
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x140015760 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1400157B0 (initialize_msvcrt_compatibility.c)
 *     sprintf_s @ 0x1400161C0 (sprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1400162EC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x140016A4C (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x140016AB4 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
