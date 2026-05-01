/*
 * XREFs of __local_stdio_scanf_options @ 0x180086794
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180086760 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800867B0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180087678 (__scrt_initialize_default_local_stdio_options.c)
 *     swscanf_s @ 0x180087EF4 (swscanf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
