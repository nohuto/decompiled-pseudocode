/*
 * XREFs of ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00C7A78
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0089860 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00C51A8 (GreSetRedirectionSurfaceSignaling.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C00C56F4 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C00C7E8C (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     GreGetDxSharedSurface @ 0x1C00E895C (GreGetDxSharedSurface.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C023C0C4 (GreAddBitmapD3DDirtyRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C023C6D8 (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetUpdateId @ 0x1C023CA80 (GreHLsurfSetUpdateId.c)
 *     GreWindowResizeComplete @ 0x1C023D070 (GreWindowResizeComplete.c)
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
