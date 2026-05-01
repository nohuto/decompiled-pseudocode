/*
 * XREFs of ??$ViewWrapperCreated@AEAIAEAPEBGAEAPEBG@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEBG1@Z @ 0x1802956D0
 * Callers:
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x180299870 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int &,unsigned short const * &,unsigned short const * &>(
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
    Context = qword_180599EB0;
    qword_180599EB0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599EC8 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599EB0, qword_180599EC8);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180599EB0);
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
    return TlgWrite(v9, &unk_1804D44FE, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
