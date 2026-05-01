/*
 * XREFs of _lambda_3c66dbed918b087d97bd7c77922d4082_::operator() @ 0x1801AC25C
 * Callers:
 *     wistd::__function::__func__lambda_3c66dbed918b087d97bd7c77922d4082__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1801AC3A0 (wistd--__function--__func__lambda_3c66dbed918b087d97bd7c77922d4082__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     CreationThreadDispatcher::RunAsync__lambda_f08a4673ec6edb9380d305cb12981f71___ @ 0x1801ABA14 (CreationThreadDispatcher--RunAsync__lambda_f08a4673ec6edb9380d305cb12981f71___.c)
 */

__int64 __fastcall lambda_3c66dbed918b087d97bd7c77922d4082_::operator()(__int64 *a1, int a2)
{
  TraceLoggingHProvider v4; // r10
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  int v7; // [rsp+3Ch] [rbp-5h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+27h] BYREF
  int *v11; // [rsp+78h] [rbp+37h]
  int v12; // [rsp+80h] [rbp+3Fh]
  int v13; // [rsp+84h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, L"PrintScreenKeyForSnippingEnabled");
    v13 = 0;
    v11 = &v7;
    v7 = a2;
    v12 = 4;
    TlgWrite(v4, &unk_1804C32D2, 0LL, 0LL, 4u, &pData);
  }
  return CreationThreadDispatcher::RunAsync__lambda_f08a4673ec6edb9380d305cb12981f71___(*(_QWORD *)(*a1 + 400), *a1);
}
