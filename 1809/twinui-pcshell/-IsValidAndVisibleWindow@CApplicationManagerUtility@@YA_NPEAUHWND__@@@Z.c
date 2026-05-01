/*
 * XREFs of ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180066548
 * Callers:
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180066320 (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicW.c)
 *     ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x1800664C0 (-GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002D934 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CApplicationManagerUtility::IsValidAndVisibleWindow(CApplicationManagerUtility *hWnd, HWND a2)
{
  char v3; // bl

  if ( hWnd == CApplicationManagerUtility::g_pIAMGlobals[12].Ptr )
    return 1;
  v3 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(hWnd, a2) )
  {
    if ( IsWindowVisible((HWND)hWnd) )
      return 1;
  }
  return v3;
}
