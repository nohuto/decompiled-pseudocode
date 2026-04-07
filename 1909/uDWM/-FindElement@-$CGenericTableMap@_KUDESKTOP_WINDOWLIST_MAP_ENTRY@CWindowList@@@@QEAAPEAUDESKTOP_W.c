/*
 * XREFs of ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180018E44
 * Callers:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18000F9D0 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011E80 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001850C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180028A60 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x180028EC8 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002D1E8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002D210 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18003A638 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003A73C (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x18004ACB0 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x18004B9D8 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x18008FE48 (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x180090844 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z @ 0x180090978 (-GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180090AA0 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800B487C (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 a2)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v4; // [rsp+30h] [rbp-58h]
  __int128 v5; // [rsp+40h] [rbp-48h]
  __int128 v6; // [rsp+50h] [rbp-38h]
  __int64 v7; // [rsp+60h] [rbp-28h]
  char v8; // [rsp+68h] [rbp-20h]

  v3[1] = 0LL;
  v7 = -1LL;
  v3[0] = a2;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v8 = 0;
  return RtlLookupElementGenericTable(a1, v3);
}
