/*
 * XREFs of ??$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x180222A20
 * Callers:
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180019E50 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewRemoved<unsigned short const *,unsigned int>(
        LPCWSTR *a1,
        __int64 a2)
{
  TLG_STATUS result; // eax
  TraceLoggingHProvider v5; // r10
  WINBOOL v6; // [rsp+30h] [rbp-68h] BYREF
  _DWORD **v7; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  __int64 v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7) && v6 )
  {
    v7 = (_DWORD **)&qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  result = (int)v7;
  if ( *v7[1] > 5u )
  {
    TlgCreateWsz(&pDesc, *a1);
    v12 = 0;
    v11 = 4;
    v10 = a2;
    return TlgWrite(v5, &unk_18045C115, 0LL, 0LL, 4u, &pData);
  }
  return result;
}
