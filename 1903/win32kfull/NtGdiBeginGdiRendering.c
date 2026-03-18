/*
 * XREFs of NtGdiBeginGdiRendering @ 0x1C011D7A0
 * Callers:
 *     <none>
 * Callees:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C011D7B4 (GreBeginGdiRenderingToDxSurface.c)
 */

__int64 NtGdiBeginGdiRendering()
{
  return GreBeginGdiRenderingToDxSurface();
}
