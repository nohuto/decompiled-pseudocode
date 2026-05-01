/*
 * XREFs of ??$Value@AEA_N@GetViewClientExtensionMapPropertyAsBool@ViewManagerInteropTraceLogging@@QEAAXAEA_N@Z @ 0x1802A3958
 * Callers:
 *     ?GetViewClientExtensionMapPropertyAsBool@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAE@Z @ 0x1802A5C20 (-GetViewClientExtensionMapPropertyAsBool@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PE.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool::Value<bool &>(
        __int64 a1,
        __int64 a2)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v5; // rcx
  WINBOOL v6; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]

  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7) && v6 )
  {
    v7 = qword_1805C2318;
    qword_1805C2318[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2330 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2318, qword_1805C2330);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805C2318);
  }
  result = (int)v7;
  v5 = (const struct _TlgProvider_t *)v7[1];
  if ( *(_DWORD *)v5 > 5u )
  {
    v11 = 0;
    v9 = a2;
    v10 = 1;
    return TlgWrite(v5, &unk_1804F791C, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 3u, &pData);
  }
  return result;
}
