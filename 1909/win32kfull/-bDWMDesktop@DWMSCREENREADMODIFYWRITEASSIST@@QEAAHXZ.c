/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C012721C
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
