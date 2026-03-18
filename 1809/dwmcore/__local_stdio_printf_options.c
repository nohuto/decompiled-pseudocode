/*
 * XREFs of __local_stdio_printf_options @ 0x1800EB814
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800EB7F0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800EB840 (initialize_msvcrt_compatibility.c)
 *     _vsnprintf @ 0x1800EC664 (_vsnprintf.c)
 *     _vsnwprintf @ 0x1800EC6CC (_vsnwprintf.c)
 *     swprintf_s @ 0x1800EC734 (swprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800ED79C (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
