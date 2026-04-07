/*
 * XREFs of ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x18007A360
 * Callers:
 *     wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_::operator() @ 0x1800795E0 (wistd--__function--__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_--operato.c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x1800798D8 (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x180079984 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ @ 0x18007A070 (-UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ @ 0x18007A0F4 (-UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18003CF84 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18004E32C (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<UDwmTrace>::get(__int64 a1, void (__cdecl *a2)())
{
  void *v3; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`UDwmTrace::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6) && (_DWORD)v5 )
  {
    v6 = qword_1800DEA20;
    qword_1800DEA20[0] = &WindowFrameLogging::`vftable';
    qword_1800DEA38 = (struct _TlgProvider_t *)&`UDwmTrace::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1800DEA20, qword_1800DEA38, v3);
    InitOnceComplete(&`UDwmTrace::Instance'::`2'::wrapper, 0, qword_1800DEA20);
  }
  return v6;
}
