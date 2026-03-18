/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C026989C
 * Callers:
 *     NtGdiRectangle @ 0x1C00FA250 (NtGdiRectangle.c)
 *     NtGdiLineTo @ 0x1C00FA890 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C0146D10 (NtGdiInvertRgn.c)
 *     GrePolyPolygon @ 0x1C0148950 (GrePolyPolygon.c)
 *     GrePolyPolyline @ 0x1C01568A0 (GrePolyPolyline.c)
 *     GrePolyBezier @ 0x1C026A420 (GrePolyBezier.c)
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
