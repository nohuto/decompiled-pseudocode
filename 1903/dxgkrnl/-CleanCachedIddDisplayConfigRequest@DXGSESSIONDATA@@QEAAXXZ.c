/*
 * XREFs of ?CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ @ 0x1C004680C
 * Callers:
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C02768C8 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001B3BC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 */

void __fastcall DXGSESSIONDATA::CleanCachedIddDisplayConfigRequest(ReferenceCounted **this)
{
  __int64 v2; // r8
  bool v3; // zf
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (struct DXGFASTMUTEX *const)(this + 2353), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(this + 2359, 0LL, v2);
  ++*((_DWORD *)this + 4716);
  v3 = v4[8] == 0;
  *((_DWORD *)this + 4717) = *((_DWORD *)this + 4716);
  if ( !v3 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
