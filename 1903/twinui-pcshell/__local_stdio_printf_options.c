/*
 * XREFs of __local_stdio_printf_options @ 0x180086784
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180086760 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800867B0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180087678 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180087D88 (_vsnwprintf.c)
 *     _vscwprintf @ 0x180087DF0 (_vscwprintf.c)
 *     swprintf_s @ 0x180087E40 (swprintf_s.c)
 *     _scwprintf @ 0x180087E98 (_scwprintf.c)
 *     _vsnprintf_s @ 0x180087F48 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
