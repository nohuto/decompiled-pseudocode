/*
 * XREFs of ??$TryShowAsViewModeAsync@AEAIAEAIAEAIAEAIAEAMAEAM@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEAM1@Z @ 0x18022EE48
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802332A8 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsViewModeAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,float &,float &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        float *a6,
        float *a7)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v12; // r10
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  WINBOOL fPending; // [rsp+38h] [rbp-91h] BYREF
  int v18; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v19; // [rsp+40h] [rbp-89h] BYREF
  int v20; // [rsp+44h] [rbp-85h] BYREF
  int v21; // [rsp+48h] [rbp-81h] BYREF
  int v22; // [rsp+4Ch] [rbp-7Dh] BYREF
  int v23; // [rsp+50h] [rbp-79h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-61h] BYREF
  int *v26; // [rsp+88h] [rbp-41h]
  int v27; // [rsp+90h] [rbp-39h]
  int v28; // [rsp+94h] [rbp-35h]
  int *v29; // [rsp+98h] [rbp-31h]
  int v30; // [rsp+A0h] [rbp-29h]
  int v31; // [rsp+A4h] [rbp-25h]
  int *v32; // [rsp+A8h] [rbp-21h]
  int v33; // [rsp+B0h] [rbp-19h]
  int v34; // [rsp+B4h] [rbp-15h]
  int *v35; // [rsp+B8h] [rbp-11h]
  int v36; // [rsp+C0h] [rbp-9h]
  int v37; // [rsp+C4h] [rbp-5h]
  int *v38; // [rsp+C8h] [rbp-1h]
  int v39; // [rsp+D0h] [rbp+7h]
  int v40; // [rsp+D4h] [rbp+Bh]
  int *v41; // [rsp+D8h] [rbp+Fh]
  int v42; // [rsp+E0h] [rbp+17h]
  int v43; // [rsp+E4h] [rbp+1Bh]

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
  v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v12 > 5u )
  {
    v13 = *a2;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v18 = v13;
    v26 = &v18;
    v19 = *a3;
    v29 = &v19;
    v20 = *a4;
    v32 = &v20;
    v27 = 4;
    v30 = 4;
    v33 = 4;
    v14 = *a5;
    v35 = &v21;
    v21 = v14;
    v36 = 4;
    v39 = 4;
    v15 = (int)*a6;
    v42 = 4;
    v38 = &v22;
    v22 = v15;
    v16 = (int)*a7;
    v41 = &v23;
    v23 = v16;
    return TlgWrite(v12, &unk_18045C56A, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 8u, &pData);
  }
  return result;
}
