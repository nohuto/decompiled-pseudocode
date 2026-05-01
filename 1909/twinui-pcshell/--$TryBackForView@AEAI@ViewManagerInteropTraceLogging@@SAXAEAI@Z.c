/*
 * XREFs of ??$TryBackForView@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x1802A32C0
 * Callers:
 *     ?TryBackForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@@Z @ 0x1802AFEC0 (-TryBackForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::TryBackForView<unsigned int &>(int *a1)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  int v6; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]

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
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    v4 = *a1;
    v11 = 0;
    v6 = v4;
    v9 = &v6;
    v10 = 4;
    return TlgWrite(v3, &unk_1804F7BF3, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
