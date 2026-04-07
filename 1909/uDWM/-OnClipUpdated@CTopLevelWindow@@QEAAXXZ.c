/*
 * XREFs of ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800122B8
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012070 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180010D18 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x18003A87C (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 */

void __fastcall CTopLevelWindow::OnClipUpdated(CAccent **this)
{
  CAccent *v2; // rcx
  CAccent *v3; // rdx

  if ( (*((_BYTE *)this[90] + 605) & 4) != 0 )
    CTopLevelWindow::OnBlurBehindUpdated((CTopLevelWindow *)this);
  v2 = this[33];
  if ( v2 )
  {
    v3 = this[90];
    if ( (*((_BYTE *)v3 + 156) & 0x10) != 0 )
      CAccent::SetClipRegion(v2, *((struct CBaseGeometryProxy **)v3 + 46));
  }
}
