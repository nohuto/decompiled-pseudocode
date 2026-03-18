/*
 * XREFs of NtGdiBeginGdiRendering @ 0x1C00F8940
 * Callers:
 *     <none>
 * Callees:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C00F8954 (GreBeginGdiRenderingToDxSurface.c)
 */

__int64 __fastcall NtGdiBeginGdiRendering(HSURF a1)
{
  return GreBeginGdiRenderingToDxSurface(a1);
}
