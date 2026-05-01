/*
 * XREFs of __local_stdio_printf_options @ 0x1800422D4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800422B0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180042300 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180043338 (__scrt_initialize_default_local_stdio_options.c)
 *     wprintf @ 0x180043A2C (wprintf.c)
 *     _vsnwprintf @ 0x180043A84 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x180043AEC (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
