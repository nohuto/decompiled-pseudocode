/*
 * XREFs of ??$CortanaNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x18031001C
 * Callers:
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ @ 0x180312AA0 (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

BOOLEAN __fastcall StartWindowTelemetry::CortanaNotInstalled<long const &>(__int64 a1)
{
  BOOLEAN result; // al
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  WINBOOL v5; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  __int64 v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v6 = &qword_1805C23C8;
    qword_1805C23C8 = &ShellScreenClippingLogging::`vftable';
    qword_1805C23E0 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C23C8, qword_1805C23E0);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805C23C8);
  }
  result = (unsigned __int8)v6;
  v3 = (const struct _TlgProvider_t *)v6[1];
  if ( *(_DWORD *)v3 > 5u )
  {
    result = TlgKeywordOn(v3, 0x400000000000uLL);
    if ( result )
    {
      v10 = 0;
      v8 = a1;
      v9 = 4;
      return TlgWrite(v4, &unk_1804FD304, 0LL, 0LL, 3u, &pData);
    }
  }
  return result;
}
