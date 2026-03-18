/*
 * XREFs of ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013F150
 * Callers:
 *     NtGdiPolyPatBlt @ 0x1C0055850 (NtGdiPolyPatBlt.c)
 *     NtGdiFillRgn @ 0x1C013DCE0 (NtGdiFillRgn.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C024FCB8 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     NtGdiFrameRgn @ 0x1C0282B60 (NtGdiFrameRgn.c)
 * Callees:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 */

int __fastcall DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(
        DWMSCREENREADMODIFYWRITEASSIST *this,
        const struct _RECTL *a2)
{
  struct XDCOBJ *v2; // rcx
  int result; // eax

  v2 = (struct XDCOBJ *)*((_QWORD *)this + 3);
  result = 0;
  if ( *(_QWORD *)v2 )
    return bSpDwmValidateSurface(v2, a2->left, a2->top, a2->right - a2->left, a2->bottom - a2->top);
  return result;
}
