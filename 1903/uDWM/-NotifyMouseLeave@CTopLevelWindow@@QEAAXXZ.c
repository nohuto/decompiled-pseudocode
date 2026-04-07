/*
 * XREFs of ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180025F44
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180028BD4 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x18003AF14 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18003F780 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180023C84 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 */

void __fastcall CTopLevelWindow::NotifyMouseLeave(CTopLevelWindow *this)
{
  CTopLevelWindow::UpdateCapturedButton(this, 0);
  CTopLevelWindow::ChangeMouseOver(this, 0LL);
}
