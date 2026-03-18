/*
 * XREFs of ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0046E0C
 * Callers:
 *     GreSetRedirectionSurfaceSignaling @ 0x1C0044844 (GreSetRedirectionSurfaceSignaling.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C0046A84 (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0046D48 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006B6E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreGetDxSharedSurface @ 0x1C012258C (GreGetDxSharedSurface.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026C95C (GreAddBitmapD3DDirtyRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C026D03C (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetUpdateId @ 0x1C026D478 (GreHLsurfSetUpdateId.c)
 *     GreWindowResizeComplete @ 0x1C026DB34 (GreWindowResizeComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::bDeviceBitmap(SFMLOGICALSURFACE *this)
{
  __int64 v1; // rcx
  int v2; // ecx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 23);
  if ( !v1 )
    return 0LL;
  v2 = *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v1) + 116);
  result = 1LL;
  if ( (v2 & 1) == 0 )
    return 0LL;
  return result;
}
