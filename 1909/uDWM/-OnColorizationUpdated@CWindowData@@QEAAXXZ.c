/*
 * XREFs of ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180038A48
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000E820 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000FE70 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180016488 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001850C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x1800388E8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?UpdateTabletMode@CDesktopManager@@QEAAJH@Z @ 0x18004C914 (-UpdateTabletMode@CDesktopManager@@QEAAJH@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CWindowData::OnColorizationUpdated(CWindowData *this)
{
  CVisual *v2; // rcx
  CWindowIconic *v3; // rcx

  v2 = (CVisual *)*((_QWORD *)this + 50);
  if ( v2 )
    CVisual::SetDirtyFlags(v2, 0x100000);
  v3 = (CWindowIconic *)*((_QWORD *)this + 55);
  if ( v3 )
    CWindowIconic::OnColorizationUpdated(v3, 1);
}
