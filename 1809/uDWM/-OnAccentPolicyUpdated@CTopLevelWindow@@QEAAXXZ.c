/*
 * XREFs of ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180036980
 * Callers:
 *     ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180036880 (-AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180075684 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?OnInteropDeviceRecreated@CWindowList@@QEAAXXZ @ 0x18008B440 (-OnInteropDeviceRecreated@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x180036C3C (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
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
