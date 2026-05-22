/*
 * XREFs of __local_stdio_printf_options @ 0x18002B6A4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18002B680 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18002B6D0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18002BB9C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x18002CAA8 (_vsnwprintf.c)
 *     vswprintf_s @ 0x18002CB10 (vswprintf_s.c)
 *     swprintf_s @ 0x18002CB74 (swprintf_s.c)
 *     _vsnprintf_s @ 0x18002CC20 (_vsnprintf_s.c)
 *     sprintf_s @ 0x18002CC90 (sprintf_s.c)
 *     _scprintf @ 0x18002CCE8 (_scprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
