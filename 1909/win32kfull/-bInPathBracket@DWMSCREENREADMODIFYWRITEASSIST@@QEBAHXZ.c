/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C026916C
 * Callers:
 *     NtGdiRectangle @ 0x1C0126470 (NtGdiRectangle.c)
 *     NtGdiLineTo @ 0x1C0126AB0 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C0147AC0 (NtGdiInvertRgn.c)
 *     GrePolyPolygon @ 0x1C0149700 (GrePolyPolygon.c)
 *     GrePolyPolyline @ 0x1C0157660 (GrePolyPolyline.c)
 *     GrePolyBezier @ 0x1C0269CF0 (GrePolyBezier.c)
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
