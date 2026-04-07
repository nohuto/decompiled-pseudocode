/*
 * XREFs of ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x1800275D4
 * Callers:
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x180007130 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180027198 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180087BFC (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180087D2C (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180027674 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 */

void __fastcall CTopLevelWindow::NotifyMouseLeave(CTopLevelWindow *this)
{
  CTopLevelWindow::UpdateCapturedButton(this, 0);
  CTopLevelWindow::ChangeMouseOver(this, 0LL);
}
