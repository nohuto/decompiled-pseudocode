/*
 * XREFs of ??1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ @ 0x1C028C478
 * Callers:
 *     ??_EDXGDISPLAYMANAGERSOURCEOBJECT@@UEAAPEAXI@Z @ 0x1C00494D0 (--_EDXGDISPLAYMANAGERSOURCEOBJECT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C000130C (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001B3BC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ?OnSourceObjectDeleted@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z @ 0x1C028CE80 (-OnSourceObjectDeleted@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z.c)
 */

void __fastcall DXGDISPLAYMANAGERSOURCEOBJECT::~DXGDISPLAYMANAGERSOURCEOBJECT(DXGDISPLAYMANAGERSOURCEOBJECT *this)
{
  struct DXGFASTMUTEX *v1; // rdx
  __int64 v3; // r8
  DXGDISPLAYMANAGEROBJECT *v4; // rcx
  DXGFASTMUTEX *v5; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 8);
  *(_QWORD *)this = &DXGDISPLAYMANAGERSOURCEOBJECT::`vftable';
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, v1, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v4 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 6);
  if ( v4 )
    DXGDISPLAYMANAGEROBJECT::OnSourceObjectDeleted(v4, this);
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  v5 = (DXGFASTMUTEX *)*((_QWORD *)this + 8);
  if ( v5 )
    DXGFASTMUTEX::`scalar deleting destructor'(v5);
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)this + 6, 0LL, v3);
  *(_QWORD *)this = &SetElement::`vftable';
}
