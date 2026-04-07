/*
 * XREFs of ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180025CA4
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180026F2C (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x180027894 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18003F640 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x1800236B4 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 */

void __fastcall CTopLevelWindow::NotifyMouseLeave(CTopLevelWindow *this)
{
  CTopLevelWindow::UpdateCapturedButton(this, 0);
  CTopLevelWindow::ChangeMouseOver(this, 0LL);
}
