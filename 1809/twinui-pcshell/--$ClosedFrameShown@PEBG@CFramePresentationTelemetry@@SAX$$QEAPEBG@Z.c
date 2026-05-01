/*
 * XREFs of ??$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z @ 0x180125AF0
 * Callers:
 *     _lambda_8bf19a67da9349d708dd7efffc5e2d17_::operator() @ 0x18005B004 (_lambda_8bf19a67da9349d708dd7efffc5e2d17_--operator().c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

BOOLEAN __fastcall CFramePresentationTelemetry::ClosedFrameShown<unsigned short const *>(LPCWSTR *a1)
{
  BOOLEAN result; // al
  TraceLoggingHProvider v3; // r10
  WINBOOL v4; // [rsp+30h] [rbp-58h] BYREF
  TraceLoggingHProvider *v5; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = (TraceLoggingHProvider *)qword_18050F7D0;
    qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
  }
  result = (unsigned __int8)v5;
  if ( *(_DWORD *)v5[1] > 5u )
  {
    result = TlgKeywordOn(v5[1], 0x200000000000uLL);
    if ( result )
    {
      TlgCreateWsz(&pDesc, *a1);
      return TlgWrite(v3, &unk_18044AD65, 0LL, 0LL, 3u, &pData);
    }
  }
  return result;
}
