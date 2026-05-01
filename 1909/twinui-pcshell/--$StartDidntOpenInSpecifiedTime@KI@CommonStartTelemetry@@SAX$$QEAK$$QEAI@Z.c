/*
 * XREFs of ??$StartDidntOpenInSpecifiedTime@KI@CommonStartTelemetry@@SAX$$QEAK$$QEAI@Z @ 0x18031936C
 * Callers:
 *     _lambda_03da5635ba8288824260caa7fdc59a24_::_lambda_invoker_cdecl_ @ 0x180317320 (_lambda_03da5635ba8288824260caa7fdc59a24_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

BOOLEAN __fastcall CommonStartTelemetry::StartDidntOpenInSpecifiedTime<unsigned long,unsigned int>(
        __int64 a1,
        __int64 a2)
{
  BOOLEAN result; // al
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  __int64 v10; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+70h] [rbp+2Fh]
  int v12; // [rsp+74h] [rbp+33h]
  __int64 v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+84h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1805C23C8;
    qword_1805C23C8 = &ShellScreenClippingLogging::`vftable';
    qword_1805C23E0 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C23C8, qword_1805C23E0);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805C23C8);
  }
  result = (unsigned __int8)Context;
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    result = TlgKeywordOn(v5, 0x400000000000uLL);
    if ( result )
    {
      v12 = 0;
      v15 = 0;
      v11 = 4;
      v14 = 4;
      v10 = a1;
      v13 = a2;
      return TlgWrite(v6, &unk_1804FE7D8, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
