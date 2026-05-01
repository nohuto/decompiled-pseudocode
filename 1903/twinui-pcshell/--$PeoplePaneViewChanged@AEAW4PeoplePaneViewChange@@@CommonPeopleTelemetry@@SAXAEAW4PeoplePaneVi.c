/*
 * XREFs of ??$PeoplePaneViewChanged@AEAW4PeoplePaneViewChange@@@CommonPeopleTelemetry@@SAXAEAW4PeoplePaneViewChange@@@Z @ 0x18021E2EC
 * Callers:
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180222704 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180049718 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??1Completer@?$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAA@XZ @ 0x18021F1A4 (--1Completer@-$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x18022283C (-PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z.c)
 */

char __fastcall CommonPeopleTelemetry::PeoplePaneViewChanged<enum PeoplePaneViewChange &>(unsigned int *a1)
{
  char result; // al
  __int64 v3; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-10h] BYREF
  int v5; // [rsp+28h] [rbp-8h]
  WINBOOL fPending; // [rsp+58h] [rbp+28h] BYREF
  LPVOID Context; // [rsp+60h] [rbp+30h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CommonPeopleTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v4 = &`CommonPeopleTelemetry::Instance'::`2'::wrapper;
    Context = &qword_18059A578;
    qword_18059A578 = (__int64)&IamTraceLogging::`vftable';
    atexit(lambda_44e945012bab8f6b706c51efd447e7a2_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<CommonPeopleTelemetry>::Completer::~Completer(&v4);
  }
  result = wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context, 0);
  if ( result )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CommonPeopleTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v4 = &`CommonPeopleTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18059A578;
        qword_18059A578 = (__int64)&IamTraceLogging::`vftable';
        atexit(lambda_44e945012bab8f6b706c51efd447e7a2_::_lambda_invoker_cdecl_);
        v5 = 0;
        wil::details::static_lazy<CommonPeopleTelemetry>::Completer::~Completer(&v4);
      }
    }
    return CommonPeopleTelemetry::PeoplePaneViewChanged_(v3, *a1);
  }
  return result;
}
