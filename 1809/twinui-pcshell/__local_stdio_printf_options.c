/*
 * XREFs of __local_stdio_printf_options @ 0x180083B64
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180083B40 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180083B90 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800849E8 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnprintf_s @ 0x1800850FC (_vsnprintf_s.c)
 *     _vsnwprintf @ 0x18008516C (_vsnwprintf.c)
 *     swprintf_s @ 0x1800851D4 (swprintf_s.c)
 *     _scwprintf @ 0x18008522C (_scwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
