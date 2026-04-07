/*
 * XREFs of ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180023B9C
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180023870 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003F1F8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180023C84 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x18008E0E0 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 */

void __fastcall CTopLevelWindow::OnOffsetUpdated(CTopLevelWindow *this)
{
  bool v1; // zf
  CDesktopThumbnailCVIVisual *v3; // rcx
  struct tagPOINT v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*((_BYTE *)this + 241) & 1) == 0;
  v4 = *(struct tagPOINT *)(*((_QWORD *)this + 90) + 48LL);
  if ( !v1 )
  {
    v4.x = -32000;
    v4.y = -32000;
  }
  CVisual::SetOffset(this, &v4);
  v3 = *(CDesktopThumbnailCVIVisual **)(*((_QWORD *)this + 90) + 592LL);
  if ( v3 )
    CDesktopThumbnailCVIVisual::SetDirtyFlags(v3, 0x1000u);
  CTopLevelWindow::UpdateCapturedButton(this, 0);
  CTopLevelWindow::ChangeMouseOver(this, 0LL);
}
