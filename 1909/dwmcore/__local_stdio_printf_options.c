/*
 * XREFs of __local_stdio_printf_options @ 0x1800E7E04
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800E7DE0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800E7E30 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800E8C30 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1800E8E64 (_vsnwprintf.c)
 *     swprintf_s @ 0x1800E8ECC (swprintf_s.c)
 *     _vsnprintf @ 0x1800E8F24 (_vsnprintf.c)
 *     sprintf_s @ 0x1800E8F8C (sprintf_s.c)
 *     _scprintf @ 0x1800E8FE4 (_scprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
