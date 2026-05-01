/*
 * XREFs of __local_stdio_printf_options @ 0x180041F84
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180041F60 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180041FB0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180042FA8 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnprintf_s @ 0x1800436AC (_vsnprintf_s.c)
 *     wprintf @ 0x18004371C (wprintf.c)
 *     _vsnwprintf @ 0x180043774 (_vsnwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
