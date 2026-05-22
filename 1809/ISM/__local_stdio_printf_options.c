/*
 * XREFs of __local_stdio_printf_options @ 0x18012B0B4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18012B090 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18012B0E0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18012B59C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnprintf_s @ 0x18012C488 (_vsnprintf_s.c)
 *     sprintf_s @ 0x18012C4F8 (sprintf_s.c)
 *     _scprintf @ 0x18012C550 (_scprintf.c)
 *     _vsnwprintf @ 0x18012C5AC (_vsnwprintf.c)
 *     vswprintf_s @ 0x18012C614 (vswprintf_s.c)
 *     swprintf_s @ 0x18012C678 (swprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
