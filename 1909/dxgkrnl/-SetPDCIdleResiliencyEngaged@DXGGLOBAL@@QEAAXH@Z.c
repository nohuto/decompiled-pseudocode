/*
 * XREFs of ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02461E4
 * Callers:
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C0244C50 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ResetDAM@DripsBlockerTrackingHelper@@AEAAXXZ @ 0x1C00C3574 (-ResetDAM@DripsBlockerTrackingHelper@@AEAAXXZ.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXXZ @ 0x1C0241584 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXXZ.c)
 *     ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x1C0246694 (-Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ.c)
 */

void __fastcall DXGGLOBAL::SetPDCIdleResiliencyEngaged(DXGGLOBAL *this, int a2)
{
  LARGE_INTEGER *v3; // rsi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (LARGE_INTEGER *)((char *)this + 1744);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGGLOBAL *)((char *)this + 1696), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  if ( a2 )
  {
    v3[37761] = KeQueryPerformanceCounter(0LL);
    LOBYTE(v3[37760].LowPart) = 1;
  }
  else
  {
    DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry((DripsBlockerTrackingHelper *)v3);
    DripsBlockerTrackingHelper::TimeInterval::Stop((DripsBlockerTrackingHelper::TimeInterval *)&v3[37760]);
  }
  DripsBlockerTrackingHelper::ResetDAM((DripsBlockerTrackingHelper *)v3);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
