/*
 * XREFs of NtGdiGetDeviceCaps @ 0x1C0018CA0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDeviceCaps @ 0x1C0018CC0 (GreGetDeviceCaps.c)
 */

__int64 NtGdiGetDeviceCaps()
{
  return GreGetDeviceCaps();
}
