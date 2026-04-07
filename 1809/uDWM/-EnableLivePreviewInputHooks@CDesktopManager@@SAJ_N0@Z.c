/*
 * XREFs of ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180079140
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180038E74 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003E6B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x180078EA8 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x18007BAA0 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::EnableLivePreviewInputHooks(char a1, char a2)
{
  HWND v4; // rcx
  unsigned int v5; // edi
  HWND v6; // rcx

  if ( !a1 )
  {
    CIconicBitmapRegistry::OnLivePreviewDismissed(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                  + 37));
    v4 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 84);
    if ( v4 )
      RemovePropW(v4, aLivepreviewwin);
  }
  v5 = CDesktopManager::EnableInputHooksHelper(
         a1,
         a2,
         L"LivePreview",
         (HWND *)CDesktopManager::s_pDesktopManagerInstance + 84);
  if ( a1 )
  {
    v6 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 84);
    if ( v6 )
      SetPropW(v6, aLivepreviewwin, HANDLE_FLAG_INHERIT);
  }
  return v5;
}
