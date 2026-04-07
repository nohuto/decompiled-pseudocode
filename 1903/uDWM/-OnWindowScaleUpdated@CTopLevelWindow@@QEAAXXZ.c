/*
 * XREFs of ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800141F4
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000C6AC (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x1800105B4 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A160 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001F010 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CTopLevelWindow::OnWindowScaleUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x40000u);
  CVisual::SetDirtyFlags(this, 0x4000000u);
}
