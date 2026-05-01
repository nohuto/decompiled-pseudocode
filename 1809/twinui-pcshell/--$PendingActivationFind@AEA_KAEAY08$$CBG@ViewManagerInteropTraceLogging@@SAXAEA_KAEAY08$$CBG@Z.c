/*
 * XREFs of ??$PendingActivationFind@AEA_KAEAY08$$CBG@ViewManagerInteropTraceLogging@@SAXAEA_KAEAY08$$CBG@Z @ 0x18020FEDC
 * Callers:
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x18021E86C (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const (&)[9]>(
        __int64 a1)
{
  TLG_STATUS result; // eax
  TraceLoggingHProvider v3; // r10
  WINBOOL v4; // [rsp+30h] [rbp-68h] BYREF
  _DWORD **v5; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = (_DWORD **)&qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  result = (int)v5;
  if ( *v5[1] > 5u )
  {
    v9 = 0;
    v7 = a1;
    v8 = 8;
    TlgCreateWsz(&pDesc, L"NotFound");
    return TlgWrite(v3, &unk_18045AEF3, 0LL, 0LL, 4u, &pData);
  }
  return result;
}
