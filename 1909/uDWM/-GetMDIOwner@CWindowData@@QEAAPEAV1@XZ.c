/*
 * XREFs of ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x1800909C8
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180039EBC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x18003F8A0 (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18007B0BC (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x18007CDE4 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180081A00 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180091600 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x1800933EC (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180014050 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

struct CWindowData *__fastcall CWindowData::GetMDIOwner(HWND *this)
{
  __int64 v1; // rbx
  HWND PropW; // rdx

  v1 = 0LL;
  PropW = (HWND)GetPropW(this[5], (LPCWSTR)0xA91B);
  if ( PropW )
    return CWindowList::FindWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), PropW);
  return (struct CWindowData *)v1;
}
