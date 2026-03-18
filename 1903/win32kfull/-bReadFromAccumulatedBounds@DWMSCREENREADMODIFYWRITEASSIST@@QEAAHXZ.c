/*
 * XREFs of ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C026993C
 * Callers:
 *     NtGdiRectangle @ 0x1C00FA250 (NtGdiRectangle.c)
 *     NtGdiLineTo @ 0x1C00FA890 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C0146D10 (NtGdiInvertRgn.c)
 *     GrePolyPolygon @ 0x1C0148950 (GrePolyPolygon.c)
 *     GrePolyPolyline @ 0x1C01568A0 (GrePolyPolyline.c)
 *     GrePolyBezier @ 0x1C026A420 (GrePolyBezier.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C014790C (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  _QWORD **v1; // rax
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx
  struct _RECTL v7; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)*((_QWORD *)this + 3);
  v3 = 0;
  if ( *v1 )
  {
    if ( (unsigned int)GreGetBounds(**v1, &v7, 4LL) )
    {
      v4 = **((_QWORD **)this + 3);
      v5 = *(_DWORD *)(v4 + 40) & 1;
      v7.left -= *(_DWORD *)(v4 + 8 * v5 + 1016);
      v7.right -= *(_DWORD *)(v4 + 8 * v5 + 1016);
      v7.top -= *(_DWORD *)(v4 + 8 * v5 + 1020);
      v7.bottom -= *(_DWORD *)(v4 + 8 * v5 + 1020);
      if ( !ERECTL::bEmpty((ERECTL *)&v7) )
        return (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(this, &v7);
    }
  }
  return v3;
}
