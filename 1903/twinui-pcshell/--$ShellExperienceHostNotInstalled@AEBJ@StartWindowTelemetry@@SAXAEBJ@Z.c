/*
 * XREFs of ??$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x1802F136C
 * Callers:
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ @ 0x1802F35D0 (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

BOOLEAN __fastcall StartWindowTelemetry::ShellExperienceHostNotInstalled<long const &>(__int64 a1)
{
  BOOLEAN result; // al
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-11h] BYREF
  __int64 v7; // [rsp+40h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+7h] BYREF
  __int64 v9; // [rsp+70h] [rbp+27h]
  int v10; // [rsp+78h] [rbp+2Fh]
  int v11; // [rsp+7Ch] [rbp+33h]
  __int64 *v12; // [rsp+80h] [rbp+37h]
  int v13; // [rsp+88h] [rbp+3Fh]
  int v14; // [rsp+8Ch] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180599F68;
    qword_180599F68 = &ShellScreenClippingLogging::`vftable';
    qword_180599F80 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599F68, qword_180599F80);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_180599F68);
  }
  result = (unsigned __int8)Context;
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 2u )
  {
    result = TlgKeywordOn(v3, 0x400000000000uLL);
    if ( result )
    {
      v11 = 0;
      v14 = 0;
      v10 = 4;
      v12 = &v7;
      v9 = a1;
      v7 = 0x1000000LL;
      v13 = 8;
      return TlgWrite(v4, &unk_1804D6DE0, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
