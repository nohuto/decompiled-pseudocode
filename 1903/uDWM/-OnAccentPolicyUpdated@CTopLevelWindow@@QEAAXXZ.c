/*
 * XREFs of ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002A4D4
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017D78 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A760 (-AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18007C014 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?OnInteropDeviceRecreated@CWindowList@@QEAAXXZ @ 0x180091634 (-OnInteropDeviceRecreated@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18002A738 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 */

void __fastcall CTopLevelWindow::OnAccentPolicyUpdated(CWindowData **this)
{
  CTopLevelWindow *v1; // r8
  bool IsWindowVisibleAndUncloaked; // dl
  CWindowData *v3; // rcx

  v1 = (CTopLevelWindow *)this;
  IsWindowVisibleAndUncloaked = 0;
  v3 = this[90];
  if ( v3 )
    IsWindowVisibleAndUncloaked = CWindowData::IsWindowVisibleAndUncloaked(v3);
  CTopLevelWindow::UpdateAccent(v1, IsWindowVisibleAndUncloaked);
}
