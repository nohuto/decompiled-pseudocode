/*
 * XREFs of ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C0246184
 * Callers:
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0033FE0 (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C024384C (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 */

void __fastcall DXGGLOBAL::SetDFxEngaged(DXGGLOBAL *this, int a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGGLOBAL *)((char *)this + 1696), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  DripsBlockerTrackingHelper::EngageDFx((DXGGLOBAL *)((char *)this + 1744), a2 != 0);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
