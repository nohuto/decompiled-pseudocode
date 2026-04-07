/*
 * XREFs of ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18000B884
 * Callers:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18000AE38 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18000AF90 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18000B160 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18001DF0C (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002A4DC (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800325F4 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180043E68 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x180049C28 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800A08E8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18001D7DC (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 */

struct CVisual *__fastcall CWindowList::GetRenderTargetRootVisualForDesktop(CWindowList *this)
{
  __int64 Element; // rcx
  struct CVisual *result; // rax

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement((char *)this + 8);
  result = 0LL;
  if ( Element )
    return *(struct CVisual **)(Element + 8);
  return result;
}
