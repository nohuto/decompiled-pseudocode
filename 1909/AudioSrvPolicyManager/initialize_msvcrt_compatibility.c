/*
 * XREFs of initialize_msvcrt_compatibility @ 0x180033EF0
 * Callers:
 *     <none>
 * Callees:
 *     __local_stdio_printf_options @ 0x180033EC4 (__local_stdio_printf_options.c)
 *     __local_stdio_scanf_options @ 0x180033ED4 (__local_stdio_scanf_options.c)
 */

__int64 initialize_msvcrt_compatibility()
{
  unsigned __int64 *v0; // rax
  unsigned __int64 *v1; // rax

  v0 = _local_stdio_printf_options();
  *v0 |= 0x18uLL;
  v1 = _local_stdio_scanf_options();
  *v1 |= 4uLL;
  return 0LL;
}
