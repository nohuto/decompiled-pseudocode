/*
 * XREFs of __local_stdio_printf_options @ 0x1800647C4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800647A0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800647F0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800657DC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180065D30 (_vsnwprintf.c)
 *     vswprintf_s @ 0x180065D98 (vswprintf_s.c)
 *     _vscwprintf @ 0x180065DFC (_vscwprintf.c)
 *     swprintf_s @ 0x180065E4C (swprintf_s.c)
 *     _vsnprintf @ 0x180065EA4 (_vsnprintf.c)
 *     _vsnprintf_s @ 0x180065F0C (_vsnprintf_s.c)
 *     _snprintf_s @ 0x180065F7C (_snprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
