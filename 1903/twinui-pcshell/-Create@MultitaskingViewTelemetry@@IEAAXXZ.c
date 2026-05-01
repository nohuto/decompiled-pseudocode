/*
 * XREFs of ?Create@MultitaskingViewTelemetry@@IEAAXXZ @ 0x1803485E0
 * Callers:
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x180348F18 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?get@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z @ 0x1803B622C (-get@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

void __fastcall MultitaskingViewTelemetry::Create(MultitaskingViewTelemetry *this)
{
  __int64 v2; // rcx
  wil::TraceLoggingProvider *v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax
  WINBOOL v6; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7) && v6 )
  {
    v7 = &unk_180599C78;
    v3 = (wil::TraceLoggingProvider *)operator new(v2, &unk_180599C78);
    wil::TraceLoggingProvider::TraceLoggingProvider(v3);
    *v4 = &ImmersiveIconsLogging::`vftable';
    v4[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
  }
  v5 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = v7[1];
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(MultitaskingViewTelemetry *))(v5 + 8))(this);
}
