/*
 * XREFs of ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x180039B54
 * Callers:
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x180006548 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180013E48 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180020430 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

void __fastcall CTopLevelWindow::ReleaseHolographicSlate(CTopLevelWindow *this)
{
  CBaseObject *v2; // rcx
  struct CVisual *v3; // rdx
  VisualCollection *v4; // rcx
  CBaseObject *v5; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 98);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    v3 = (struct CVisual *)*((_QWORD *)this + 59);
    v4 = (VisualCollection *)(*((_QWORD *)this + 99) + 32LL);
    *((_QWORD *)this + 98) = 0LL;
    VisualCollection::InsertRelative(v4, v3, 0LL, 1u, 1);
    v5 = (CBaseObject *)*((_QWORD *)this + 99);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *((_QWORD *)this + 99) = 0LL;
    }
  }
}
