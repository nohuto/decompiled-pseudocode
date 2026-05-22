/*
 * XREFs of __local_stdio_printf_options @ 0x18002B324
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18002B300 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18002B350 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18002B81C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x18002C728 (_vsnwprintf.c)
 *     vswprintf_s @ 0x18002C790 (vswprintf_s.c)
 *     swprintf_s @ 0x18002C7F4 (swprintf_s.c)
 *     _vsnprintf_s @ 0x18002C8A0 (_vsnprintf_s.c)
 *     sprintf_s @ 0x18002C910 (sprintf_s.c)
 *     _scprintf @ 0x18002C968 (_scprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
