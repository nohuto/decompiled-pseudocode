/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C00FAFFC
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

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 *v1; // rax
  unsigned int v2; // ecx
  __int64 v3; // rdx

  v1 = (__int64 *)*((_QWORD *)this + 3);
  v2 = 0;
  v3 = *v1;
  if ( *v1 && *(_DWORD *)(v3 + 492) )
    return (*(_DWORD *)(v3 + 36) & 0x4000) != 0;
  return v2;
}
