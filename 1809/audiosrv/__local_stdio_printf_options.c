/*
 * XREFs of __local_stdio_printf_options @ 0x1800601A4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180060180 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800601D0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18006117C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnprintf @ 0x1800616DC (_vsnprintf.c)
 *     _vsnprintf_s @ 0x180061744 (_vsnprintf_s.c)
 *     _snprintf_s @ 0x1800617B4 (_snprintf_s.c)
 *     _vsnwprintf @ 0x180061814 (_vsnwprintf.c)
 *     vswprintf_s @ 0x18006187C (vswprintf_s.c)
 *     _vscwprintf @ 0x1800618E0 (_vscwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
