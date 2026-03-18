/*
 * XREFs of ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@@Z @ 0x1C02342B4
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234584 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001B3BC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 */

__int64 __fastcall DXGSESSIONDATA::CacheIddDisplayConfigRequest(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // ebx
  bool v7; // zf
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(a1 + 18824), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v5 = *a2;
  if ( *a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = *a2;
  }
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)(a1 + 18872), v5, v4);
  v6 = *(_DWORD *)(a1 + 18864) + 1;
  v7 = v9[8] == 0;
  *(_DWORD *)(a1 + 18864) = v6;
  if ( !v7 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return v6;
}
