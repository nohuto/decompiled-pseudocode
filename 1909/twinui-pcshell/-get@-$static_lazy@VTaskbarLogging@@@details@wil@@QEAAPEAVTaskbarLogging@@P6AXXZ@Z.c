/*
 * XREFs of ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x180186A1C
 * Callers:
 *     ??1?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801825EC (--1-$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VTask.c)
 *     ?NotifyFailure@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1801846A0 (-NotifyFailure@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?ReportStopActivity@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1801853C4 (-ReportStopActivity@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x180185AA0 (-StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x180185B80 (-StartActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180185C60 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ?StopActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x180185D90 (-StopActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x180186060 (-StopActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180186CB0 (-zInternalStart@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<TaskbarLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`TaskbarLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    v5 = qword_1805C2070;
    qword_1805C2070[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2088 = (struct _TlgProvider_t *)&`TaskbarLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2070, qword_1805C2088);
    InitOnceComplete(&`TaskbarLogging::Instance'::`2'::wrapper, 0, qword_1805C2070);
  }
  return v5;
}
