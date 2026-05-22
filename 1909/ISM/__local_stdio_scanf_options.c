/*
 * XREFs of __local_stdio_scanf_options @ 0x18002B334
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18002B300 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18002B350 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18002B81C (__scrt_initialize_default_local_stdio_options.c)
 *     swscanf_s @ 0x18002C84C (swscanf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
