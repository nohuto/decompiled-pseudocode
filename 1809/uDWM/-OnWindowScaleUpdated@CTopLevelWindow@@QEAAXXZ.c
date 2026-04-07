/*
 * XREFs of ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180087D00
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800146E8 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015A80 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CTopLevelWindow::OnWindowScaleUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x40000);
  CVisual::SetDirtyFlags(this, 0x4000000);
}
