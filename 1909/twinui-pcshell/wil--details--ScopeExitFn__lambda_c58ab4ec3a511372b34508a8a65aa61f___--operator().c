/*
 * XREFs of wil::details::ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___::operator() @ 0x180086310
 * Callers:
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18004D840 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     wil::details::ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___::_ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___ @ 0x180319B18 (wil--details--ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___--_ScopeExitFn__lambda_c58a.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___::operator()(int *a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rdi
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  int v6; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+3Ch] [rbp-15h] BYREF
  int v10; // [rsp+40h] [rbp-11h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  int *v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  int *v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  if ( *((_BYTE *)a1 + 16) )
  {
    Context = 0LL;
    *((_BYTE *)a1 + 16) = 0;
    v3 = *((_QWORD *)a1 + 1);
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1805C23C8;
      qword_1805C23C8 = &ShellScreenClippingLogging::`vftable';
      qword_1805C23E0 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C23C8, qword_1805C23E0);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805C23C8);
    }
    LOBYTE(v1) = (_BYTE)Context;
    v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v4 > 5u )
    {
      LOBYTE(v1) = TlgKeywordOn(v4, 0x200000000000uLL);
      if ( (_BYTE)v1 )
      {
        v6 = *a1;
        v15 = 0;
        v18 = 0;
        v9 = v6;
        v13 = &v9;
        v10 = *(_DWORD *)(v3 + 64);
        v16 = &v10;
        v14 = 4;
        v17 = 4;
        LOBYTE(v1) = TlgWrite(v5, &unk_1804FE3E1, 0LL, 0LL, 4u, &pData);
      }
    }
  }
  return (char)v1;
}
