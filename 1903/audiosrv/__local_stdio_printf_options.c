/*
 * XREFs of __local_stdio_printf_options @ 0x1800637D4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800637B0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180063800 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800647EC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180064D40 (_vsnwprintf.c)
 *     vswprintf_s @ 0x180064DA8 (vswprintf_s.c)
 *     _vscwprintf @ 0x180064E0C (_vscwprintf.c)
 *     swprintf_s @ 0x180064E5C (swprintf_s.c)
 *     _vsnprintf @ 0x180064EB4 (_vsnprintf.c)
 *     _vsnprintf_s @ 0x180064F1C (_vsnprintf_s.c)
 *     _snprintf_s @ 0x180064F8C (_snprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
