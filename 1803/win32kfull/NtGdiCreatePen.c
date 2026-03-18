/*
 * XREFs of NtGdiCreatePen @ 0x1C00E9430
 * Callers:
 *     <none>
 * Callees:
 *     GreCreatePen @ 0x1C00E9444 (GreCreatePen.c)
 */

__int64 NtGdiCreatePen()
{
  return GreCreatePen();
}
