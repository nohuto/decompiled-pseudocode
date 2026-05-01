/*
 * XREFs of ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x18033466C
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAK@Z @ 0x18002FC70 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ??$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x18033A43C (--$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIAppl.c)
 *     ?IsEnabled@DesktopPositionerTelemetry@@SA_NE_K@Z @ 0x18033D638 (-IsEnabled@DesktopPositionerTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DesktopPositionerTelemetry::Create(DesktopPositionerTelemetry *this)
{
  WINBOOL v2; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v2, (LPVOID *)&v3) && v2 )
  {
    v3 = &qword_18050F8E8;
    qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
    qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
  }
  *((_QWORD *)this + 1) = v3[1];
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(DesktopPositionerTelemetry *))(*(_QWORD *)this + 8LL))(this);
}
