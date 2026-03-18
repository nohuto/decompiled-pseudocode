/*
 * XREFs of __local_stdio_printf_options @ 0x1800E6F54
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800E6F30 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800E6F80 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800E7D80 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1800E7FB4 (_vsnwprintf.c)
 *     swprintf_s @ 0x1800E801C (swprintf_s.c)
 *     _vsnprintf @ 0x1800E8074 (_vsnprintf.c)
 *     sprintf_s @ 0x1800E80DC (sprintf_s.c)
 *     _scprintf @ 0x1800E8134 (_scprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
