/*
 * XREFs of ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180005254
 * Callers:
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x1800050F4 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800102A0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180015E18 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017D78 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180026D90 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateTabletMode@CDesktopManager@@QEAAJH@Z @ 0x18004CA64 (-UpdateTabletMode@CDesktopManager@@QEAAJH@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CWindowData::OnColorizationUpdated(CWindowData *this)
{
  CVisual *v2; // rcx
  CWindowIconic *v3; // rcx

  v2 = (CVisual *)*((_QWORD *)this + 50);
  if ( v2 )
    CVisual::SetDirtyFlags(v2, 0x100000u);
  v3 = (CWindowIconic *)*((_QWORD *)this + 55);
  if ( v3 )
    CWindowIconic::OnColorizationUpdated(v3, 1);
}
