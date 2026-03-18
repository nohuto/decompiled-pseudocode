/*
 * XREFs of ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C014790C
 * Callers:
 *     NtGdiPolyPatBlt @ 0x1C005C730 (NtGdiPolyPatBlt.c)
 *     NtGdiFrameRgn @ 0x1C0145A10 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C01472A0 (NtGdiFillRgn.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C026993C (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 * Callees:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C006DB70 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(
        DWMSCREENREADMODIFYWRITEASSIST *this,
        const struct _RECTL *a2)
{
  struct XDCOBJ *v2; // rcx
  __int64 result; // rax

  v2 = (struct XDCOBJ *)*((_QWORD *)this + 3);
  result = 0LL;
  if ( *(_QWORD *)v2 )
    return bSpDwmValidateSurface(v2, a2->left, a2->top, a2->right - a2->left, a2->bottom - a2->top);
  return result;
}
