/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C024FC18
 * Callers:
 *     NtGdiLineTo @ 0x1C00A0990 (NtGdiLineTo.c)
 *     NtGdiRectangle @ 0x1C00A3E60 (NtGdiRectangle.c)
 *     NtGdiInvertRgn @ 0x1C013CA50 (NtGdiInvertRgn.c)
 *     GrePolyPolygon @ 0x1C0140CC0 (GrePolyPolygon.c)
 *     GrePolyPolyline @ 0x1C01417E0 (GrePolyPolyline.c)
 *     GrePolyBezier @ 0x1C0250790 (GrePolyBezier.c)
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
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 248LL) & 1) == 0 )
    return 0;
  return v2;
}
