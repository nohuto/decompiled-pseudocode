/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C009EB70
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

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 *v1; // rax
  unsigned int v2; // ecx
  __int64 v3; // rdx

  v1 = (__int64 *)*((_QWORD *)this + 3);
  v2 = 0;
  v3 = *v1;
  if ( *v1 && *(_DWORD *)(v3 + 500) )
    return (*(_DWORD *)(v3 + 36) & 0x4000) != 0;
  return v2;
}
