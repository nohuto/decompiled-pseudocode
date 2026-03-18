/*
 * XREFs of NtGdiBeginGdiRendering @ 0x1C00F7230
 * Callers:
 *     <none>
 * Callees:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C00F7244 (GreBeginGdiRenderingToDxSurface.c)
 */

__int64 NtGdiBeginGdiRendering()
{
  return GreBeginGdiRenderingToDxSurface();
}
