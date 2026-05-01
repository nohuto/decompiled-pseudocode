/*
 * XREFs of ?AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x1802E79E0
 * Callers:
 *     _lambda_029a20c939beb4174ee85d77404827fb_::operator() @ 0x1802E77A0 (_lambda_029a20c939beb4174ee85d77404827fb_--operator().c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 */

BOOLEAN __fastcall MultitaskingViewTelemetry::AltTabInvoked_(__int64 a1, char a2)
{
  BOOLEAN result; // al
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  bool v6; // [rsp+30h] [rbp-9h] BYREF
  char v7; // [rsp+31h] [rbp-8h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-5h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  bool *v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  char *v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050F8E8;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050F8E8);
    qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
    qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
  }
  result = (unsigned __int8)Context;
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    result = TlgKeywordOn(v4, 0x200000000000uLL);
    if ( result )
    {
      v13 = 0;
      v12 = 1;
      v7 = a2 & 1;
      v16 = 0;
      v6 = (a2 & 2) != 0;
      v11 = &v6;
      v14 = &v7;
      v15 = 1;
      return TlgWrite(v5, &unk_180464925, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
