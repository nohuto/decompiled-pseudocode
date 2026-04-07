/*
 * XREFs of ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18003CB8C
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x180012A84 (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x180015620 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CTopLevelWindow::ForceDisconnectClientArea(struct CVisual **this)
{
  CBaseObject *v2; // rax
  __int64 v3; // rcx

  if ( (*((_BYTE *)this + 241) & 2) != 0 )
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
