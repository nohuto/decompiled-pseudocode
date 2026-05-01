/*
 * XREFs of ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x18016768C
 * Callers:
 *     ??1?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18016328C (--1-$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VTask.c)
 *     ?NotifyFailure@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180165320 (-NotifyFailure@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?ReportStopActivity@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18016603C (-ReportStopActivity@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x180166710 (-StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x1801667F0 (-StartActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801668D0 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ?StopActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x180166A00 (-StopActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x180166CD0 (-StopActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180167920 (-zInternalStart@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<TaskbarLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`TaskbarLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    v5 = qword_180599C50;
    qword_180599C50[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599C68 = (struct _TlgProvider_t *)&`TaskbarLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599C50, qword_180599C68);
    InitOnceComplete(&`TaskbarLogging::Instance'::`2'::wrapper, 0, qword_180599C50);
  }
  return v5;
}
