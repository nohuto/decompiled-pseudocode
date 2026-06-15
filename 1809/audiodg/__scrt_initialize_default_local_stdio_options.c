/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x14001C4AC
 * Callers:
 *     post_pgo_initialization @ 0x14001BA50 (post_pgo_initialization.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x14001B944 (__local_stdio_printf_options.c)
 *     __local_stdio_scanf_options @ 0x14001B954 (__local_stdio_scanf_options.c)
 */

unsigned __int64 *_scrt_initialize_default_local_stdio_options()
{
  unsigned __int64 *v0; // rax
  unsigned __int64 *result; // rax

  v0 = _local_stdio_printf_options();
  *v0 |= 4uLL;
  result = _local_stdio_scanf_options();
  *result |= 2uLL;
  return result;
}
