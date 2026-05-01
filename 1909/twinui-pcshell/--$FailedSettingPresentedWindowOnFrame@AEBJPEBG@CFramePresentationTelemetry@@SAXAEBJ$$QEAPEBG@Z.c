/*
 * XREFs of ??$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z @ 0x18016E6A8
 * Callers:
 *     _lambda_e3734e8a49c419fea61bf82ed4fde94a_::operator() @ 0x18000E324 (_lambda_e3734e8a49c419fea61bf82ed4fde94a_--operator().c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

BOOLEAN __fastcall CFramePresentationTelemetry::FailedSettingPresentedWindowOnFrame<long const &,unsigned short const *>(
        __int64 a1,
        const WCHAR **a2)
{
  BOOLEAN result; // al
  const WCHAR *v5; // rdx
  TraceLoggingHProvider v6; // r10
  UINT32 cData; // r11d
  WINBOOL v8; // [rsp+30h] [rbp-68h] BYREF
  TraceLoggingHProvider *v9; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v8, (LPVOID *)&v9) && v8 )
  {
    v9 = (TraceLoggingHProvider *)&qword_1805C1F08;
    qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
    qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
  }
  result = (unsigned __int8)v9;
  if ( *(_DWORD *)v9[1] > 5u )
  {
    result = TlgKeywordOn(v9[1], 0x400000000000uLL);
    if ( result )
    {
      v13 = 0;
      v5 = *a2;
      v12 = 4;
      v11 = a1;
      TlgCreateWsz(&pDesc, v5);
      return TlgWrite(v6, &unk_1804E006A, 0LL, 0LL, cData, &pData);
    }
  }
  return result;
}
