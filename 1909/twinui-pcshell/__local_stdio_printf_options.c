/*
 * XREFs of __local_stdio_printf_options @ 0x180089194
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180089170 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800891C0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18008A1B8 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x18008A8C8 (_vsnwprintf.c)
 *     _vscwprintf @ 0x18008A930 (_vscwprintf.c)
 *     swprintf_s @ 0x18008A980 (swprintf_s.c)
 *     _scwprintf @ 0x18008A9D8 (_scwprintf.c)
 *     _vsnprintf_s @ 0x18008AA88 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
