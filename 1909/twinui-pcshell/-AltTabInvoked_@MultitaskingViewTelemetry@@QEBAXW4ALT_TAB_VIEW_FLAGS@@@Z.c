/*
 * XREFs of ?AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x180367AF0
 * Callers:
 *     _lambda_cce109df49c6adc2bc0ad171c00602d8_::operator() @ 0x1803678B0 (_lambda_cce109df49c6adc2bc0ad171c00602d8_--operator().c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18011EF44 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 */

BOOLEAN __fastcall MultitaskingViewTelemetry::AltTabInvoked_(__int64 a1, char a2)
{
  __int64 v3; // rcx
  wil::TraceLoggingProvider *v4; // rax
  _QWORD *v5; // rcx
  BOOLEAN result; // al
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  bool v9; // [rsp+30h] [rbp-9h] BYREF
  char v10; // [rsp+31h] [rbp-8h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-5h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  bool *v14; // [rsp+60h] [rbp+27h]
  int v15; // [rsp+68h] [rbp+2Fh]
  int v16; // [rsp+6Ch] [rbp+33h]
  char *v17; // [rsp+70h] [rbp+37h]
  int v18; // [rsp+78h] [rbp+3Fh]
  int v19; // [rsp+7Ch] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &unk_1805C2098;
    v4 = (wil::TraceLoggingProvider *)operator new(v3, &unk_1805C2098);
    wil::TraceLoggingProvider::TraceLoggingProvider(v4);
    *v5 = &ImmersiveIconsLogging::`vftable';
    v5[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
  }
  result = (unsigned __int8)Context;
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    result = TlgKeywordOn(v7, 0x200000000000uLL);
    if ( result )
    {
      v16 = 0;
      v15 = 1;
      v10 = a2 & 1;
      v19 = 0;
      v9 = (a2 & 2) != 0;
      v14 = &v9;
      v17 = &v10;
      v18 = 1;
      return TlgWrite(v8, &unk_1805039C3, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
