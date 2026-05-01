/*
 * XREFs of ?WatchCurrentThread@TaskFlowDataEngineTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180215FCC
 * Callers:
 *     _lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e_::operator() @ 0x18020F34C (_lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e_--operator().c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z @ 0x18020EA7C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z.c)
 */

wil::ActivityThreadWatcher *__fastcall TaskFlowDataEngineTelemetry::WatchCurrentThread(
        wil::ActivityThreadWatcher *a1,
        __int64 a2)
{
  struct wil::details::IFailureCallback *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v4 = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v4)
    && (_DWORD)v5 )
  {
    v4 = (struct wil::details::IFailureCallback *)qword_1805C2260;
    qword_1805C2260[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2278 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2260, qword_1805C2278);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1805C2260);
  }
  wil::ActivityThreadWatcher::ActivityThreadWatcher(
    a1,
    v4,
    "TaskFlowDataEngineTelemetry.GetCurrentActivityForAllViewsAsync.AsyncOperation");
  return a1;
}
