/*
 * XREFs of NtGdiFlush @ 0x1C0073E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGdiFlush()
{
  if ( (int)IsGreFlushSupported() >= 0 )
    GreFlush();
  return 0LL;
}
