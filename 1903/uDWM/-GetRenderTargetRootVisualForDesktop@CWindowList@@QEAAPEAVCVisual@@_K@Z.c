/*
 * XREFs of ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002C464
 * Callers:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180004FA0 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000BE6C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002C1BC (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002C490 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18002FA1C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18003CBD8 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180049510 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x18004BF18 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800A50A8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x1800186A4 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 */

struct CVisual *__fastcall CWindowList::GetRenderTargetRootVisualForDesktop(CWindowList *this, __int64 a2)
{
  _QWORD *Element; // rcx
  struct CVisual *result; // rax

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  result = 0LL;
  if ( Element )
    return (struct CVisual *)Element[1];
  return result;
}
