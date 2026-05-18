/*
 * XREFs of __local_stdio_printf_options @ 0x180005004
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180004FE0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180005030 (initialize_msvcrt_compatibility.c)
 *     _vsnwprintf @ 0x180005A88 (_vsnwprintf.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180006438 (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
