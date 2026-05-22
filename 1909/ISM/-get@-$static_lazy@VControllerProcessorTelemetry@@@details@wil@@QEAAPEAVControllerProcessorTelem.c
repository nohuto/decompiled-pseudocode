/*
 * XREFs of ?get@?$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelemetry@@P6AXXZ@Z @ 0x180079FFC
 * Callers:
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x180079C8C (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x180079D24 (-LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x180079E04 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180027B3C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18002BC68 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<ControllerProcessorTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`ControllerProcessorTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, &v5)
    && (_DWORD)v4 )
  {
    v5 = &qword_1801E1308;
    qword_1801E1308 = &RawInputProvidersContinuousTracing::`vftable';
    qword_1801E1320 = (struct _TlgProvider_t *)&`ControllerProcessorTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801E1308, qword_1801E1320);
    InitOnceComplete(&`ControllerProcessorTelemetry::Instance'::`2'::wrapper, 0, &qword_1801E1308);
  }
  return v5;
}
