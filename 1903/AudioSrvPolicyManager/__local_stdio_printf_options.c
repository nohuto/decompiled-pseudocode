/*
 * XREFs of __local_stdio_printf_options @ 0x180033FC4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180033FA0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180033FF0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180034C80 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1800351CC (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x180035234 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
