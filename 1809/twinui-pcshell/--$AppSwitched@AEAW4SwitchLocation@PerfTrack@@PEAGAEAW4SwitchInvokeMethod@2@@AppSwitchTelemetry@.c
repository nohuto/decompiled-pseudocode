/*
 * XREFs of ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x1803074CC
 * Callers:
 *     ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x180307750 (-SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4Swi.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007209C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ @ 0x1803075E4 (--1Completer@-$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ.c)
 *     ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x180307650 (-AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1.c)
 */

char __fastcall PerfTrack::AppSwitchTelemetry::AppSwitched<enum PerfTrack::SwitchLocation &,unsigned short *,enum PerfTrack::SwitchInvokeMethod &>(
        unsigned int *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  char result; // al
  __int64 v7; // rcx
  LPVOID Context; // [rsp+30h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v9; // [rsp+38h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp-10h]
  WINBOOL fPending; // [rsp+98h] [rbp+48h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`PerfTrack::AppSwitchTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v9 = &`PerfTrack::AppSwitchTelemetry::Instance'::`2'::wrapper;
    Context = &qword_180510188;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_180510188);
    qword_180510188 = &MultitaskingViewTelemetry::`vftable';
    atexit(lambda_2ca303a503a9bc4bb017c32a5a335e85_::_lambda_invoker_cdecl_);
    v10 = 0;
    wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::Completer::~Completer(&v9);
  }
  result = wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context, 0);
  if ( result )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`PerfTrack::AppSwitchTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v9 = &`PerfTrack::AppSwitchTelemetry::Instance'::`2'::wrapper;
        Context = &qword_180510188;
        wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_180510188);
        qword_180510188 = &MultitaskingViewTelemetry::`vftable';
        atexit(lambda_2ca303a503a9bc4bb017c32a5a335e85_::_lambda_invoker_cdecl_);
        v10 = 0;
        wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::Completer::~Completer(&v9);
      }
    }
    return PerfTrack::AppSwitchTelemetry::AppSwitched_(v7, *a1, *a2, *a3);
  }
  return result;
}
