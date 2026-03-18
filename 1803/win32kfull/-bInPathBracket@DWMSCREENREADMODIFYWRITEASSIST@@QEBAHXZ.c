/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C026E8CC
 * Callers:
 *     GrePolyPolygon @ 0x1C007C7D0 (GrePolyPolygon.c)
 *     NtGdiRectangle @ 0x1C00F6E60 (NtGdiRectangle.c)
 *     NtGdiInvertRgn @ 0x1C011B160 (NtGdiInvertRgn.c)
 *     NtGdiLineTo @ 0x1C011B940 (NtGdiLineTo.c)
 *     GrePolyBezier @ 0x1C026F800 (GrePolyBezier.c)
 *     GrePolyPolyline @ 0x1C026FD60 (GrePolyPolyline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 3);
  if ( !*(_QWORD *)v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 256LL) & 1) == 0 )
    return 0;
  return v2;
}
