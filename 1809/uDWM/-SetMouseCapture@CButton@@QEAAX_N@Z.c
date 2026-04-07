/*
 * XREFs of ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180006EF0
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800142F0 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180014580 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180027674 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CButton::SetMouseCapture(CButton *this, char a2)
{
  if ( ((*((_BYTE *)this + 280) & 8) != 0) != a2 )
  {
    *((_BYTE *)this + 280) = (8 * a2) | *((_BYTE *)this + 280) & 0xF7;
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
}
