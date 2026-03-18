/*
 * XREFs of ?FinishPnPTransition@DXGSESSIONMGR@@QEAAXJ@Z @ 0x1C015DD58
 * Callers:
 *     DxgkFinishPnPTransition @ 0x1C015DD24 (DxgkFinishPnPTransition.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DXGSESSIONMGR::FinishPnPTransition(DXGSESSIONMGR *this)
{
  struct _KEVENT *v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  if ( (*((_DWORD *)this + 36))-- == 1 )
  {
    v3 = (struct _KEVENT *)*((_QWORD *)this + 17);
    if ( v3 )
      KeSetEvent(v3, 0, 0);
  }
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
