/*
 * XREFs of ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x1803B45A8
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x18003B9C4 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ??$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x1803BE938 (--$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIAppl.c)
 *     ?IsEnabled@DesktopPositionerTelemetry@@SA_NE_K@Z @ 0x1803C1B98 (-IsEnabled@DesktopPositionerTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DesktopPositionerTelemetry::Create(DesktopPositionerTelemetry *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = &unk_1805C2098;
    v3 = operator new(v2, &unk_1805C2098);
    *v3 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
    *v3 = &ImmersiveIconsLogging::`vftable';
    v3[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
  }
  *((_QWORD *)this + 1) = v5[1];
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(DesktopPositionerTelemetry *))(*(_QWORD *)this + 8LL))(this);
}
