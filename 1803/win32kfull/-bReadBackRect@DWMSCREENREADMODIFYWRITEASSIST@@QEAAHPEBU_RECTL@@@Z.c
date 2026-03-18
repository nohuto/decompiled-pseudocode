/*
 * XREFs of ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C011D5F4
 * Callers:
 *     NtGdiPolyPatBlt @ 0x1C009E190 (NtGdiPolyPatBlt.c)
 *     NtGdiFrameRgn @ 0x1C01182C0 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C011C820 (NtGdiFillRgn.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C026E8F4 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 * Callees:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0090DC0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
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
