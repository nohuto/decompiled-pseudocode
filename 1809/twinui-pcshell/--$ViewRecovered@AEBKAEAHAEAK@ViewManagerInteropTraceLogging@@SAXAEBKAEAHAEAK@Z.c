/*
 * XREFs of ??$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z @ 0x1802103C0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_a236308192c34c6db0bff0a9505341b8___::_ScopeExitFn__lambda_a236308192c34c6db0bff0a9505341b8___ @ 0x180211624 (wil--details--ScopeExitFn__lambda_a236308192c34c6db0bff0a9505341b8___--_ScopeExitFn__lambda_a236.c)
 *     _lambda_7d6b9a4e32c168b2e51ca46a812f2e25_::operator() @ 0x1802124E8 (_lambda_7d6b9a4e32c168b2e51ca46a812f2e25_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v7; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+70h] [rbp+1Fh]
  int v13; // [rsp+74h] [rbp+23h]
  __int64 v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  __int64 v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+94h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  result = (int)Context;
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v12 = 4;
    v15 = 4;
    v18 = 4;
    v11 = a1;
    v14 = a2;
    v17 = a3;
    return TlgWrite(v7, &unk_18045AFA3, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
