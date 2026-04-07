/*
 * XREFs of ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180087BFC
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18008EA40 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x180087FC0 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 */

void __fastcall CTopLevelWindow::OnOffsetUpdated(CTopLevelWindow *this)
{
  bool v1; // zf
  CDesktopThumbnailCVIVisual *v3; // rcx
  struct tagPOINT v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*((_BYTE *)this + 241) & 2) == 0;
  v4 = *(struct tagPOINT *)(*((_QWORD *)this + 90) + 48LL);
  if ( !v1 )
  {
    v4.x = -32000;
    v4.y = -32000;
  }
  CVisual::SetOffset((struct tagPOINT *)this, &v4);
  v3 = *(CDesktopThumbnailCVIVisual **)(*((_QWORD *)this + 90) + 584LL);
  if ( v3 )
    CDesktopThumbnailCVIVisual::SetDirtyFlags(v3, 0x1000u);
  CTopLevelWindow::NotifyMouseLeave(this);
}
