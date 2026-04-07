/*
 * XREFs of ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x180006548
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x180010518 (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x180039B54 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::ForceDisconnectClientArea(struct CVisual **this)
{
  CBaseObject *v2; // rax
  __int64 v3; // rcx

  if ( (*((_BYTE *)this + 241) & 4) != 0 )
    CTopLevelWindow::ReleaseHolographicSlate((CTopLevelWindow *)this);
  v2 = this[59];
  if ( v2 )
  {
    v3 = *((_QWORD *)v2 + 3);
    if ( v3 )
    {
      VisualCollection::Remove((VisualCollection *)(v3 + 32), this[59]);
      v2 = this[59];
    }
    if ( v2 )
    {
      CBaseObject::Release(v2);
      this[59] = 0LL;
    }
  }
}
