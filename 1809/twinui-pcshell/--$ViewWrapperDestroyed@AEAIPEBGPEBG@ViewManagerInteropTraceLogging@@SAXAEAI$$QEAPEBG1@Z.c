/*
 * XREFs of ??$ViewWrapperDestroyed@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x18023F680
 * Callers:
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x180245520 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::ViewWrapperDestroyed<unsigned int &,unsigned short const *,unsigned short const *>(
        int *a1,
        const WCHAR **a2,
        LPCWSTR *a3)
{
  TLG_STATUS result; // eax
  int v7; // eax
  const WCHAR *v8; // rdx
  TraceLoggingHProvider v9; // r10
  WINBOOL fPending; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+34h] [rbp-25h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+80h] [rbp+27h] BYREF

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
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    v7 = *a1;
    v8 = *a2;
    v16 = 0;
    v11 = v7;
    v14 = &v11;
    v15 = 4;
    TlgCreateWsz(&pDesc, v8);
    TlgCreateWsz(&v18, *a3);
    return TlgWrite(v9, &unk_18045F16A, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
