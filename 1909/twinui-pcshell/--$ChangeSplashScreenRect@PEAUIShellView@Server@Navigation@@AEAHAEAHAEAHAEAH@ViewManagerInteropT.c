/*
 * XREFs of ??$ChangeSplashScreenRect@PEAUIShellView@Server@Navigation@@AEAHAEAHAEAHAEAH@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEAH111@Z @ 0x1802A2548
 * Callers:
 *     ?SetSplashScreenRect@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBURect@Foundation@Windows@@@Z @ 0x1802A9970 (-SetSplashScreenRect@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::ChangeSplashScreenRect<Navigation::Server::IShellView *,int &,int &,int &,int &>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  WINBOOL fPending; // [rsp+38h] [rbp-71h] BYREF
  int v14; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v15; // [rsp+40h] [rbp-69h] BYREF
  int v16; // [rsp+44h] [rbp-65h] BYREF
  int v17; // [rsp+48h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-59h] BYREF
  __int64 v19; // [rsp+58h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-41h] BYREF
  __int64 *v21; // [rsp+88h] [rbp-21h]
  int v22; // [rsp+90h] [rbp-19h]
  int v23; // [rsp+94h] [rbp-15h]
  int *v24; // [rsp+98h] [rbp-11h]
  int v25; // [rsp+A0h] [rbp-9h]
  int v26; // [rsp+A4h] [rbp-5h]
  int *v27; // [rsp+A8h] [rbp-1h]
  int v28; // [rsp+B0h] [rbp+7h]
  int v29; // [rsp+B4h] [rbp+Bh]
  int *v30; // [rsp+B8h] [rbp+Fh]
  int v31; // [rsp+C0h] [rbp+17h]
  int v32; // [rsp+C4h] [rbp+1Bh]
  int *v33; // [rsp+C8h] [rbp+1Fh]
  int v34; // [rsp+D0h] [rbp+27h]
  int v35; // [rsp+D4h] [rbp+2Bh]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805C2318;
    qword_1805C2318[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2330 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2318, qword_1805C2330);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805C2318);
  }
  result = (int)Context;
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v10 > 5u )
  {
    v11 = *a1;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v19 = v11;
    v21 = &v19;
    v14 = *a2;
    v24 = &v14;
    v15 = *a3;
    v27 = &v15;
    v16 = *a4;
    v30 = &v16;
    v22 = 8;
    v25 = 4;
    v28 = 4;
    v12 = *a5;
    v33 = &v17;
    v31 = 4;
    v17 = v12;
    v34 = 4;
    return TlgWrite(v10, &unk_1804F7964, 0LL, 0LL, 7u, &pData);
  }
  return result;
}
