/*
 * XREFs of __local_stdio_scanf_options @ 0x180083B74
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180083B40 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180083B90 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800849E8 (__scrt_initialize_default_local_stdio_options.c)
 *     swscanf_s @ 0x180085288 (swscanf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
