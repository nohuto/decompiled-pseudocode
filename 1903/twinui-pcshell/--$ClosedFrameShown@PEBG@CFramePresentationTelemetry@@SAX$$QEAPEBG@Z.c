/*
 * XREFs of ??$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z @ 0x18014F204
 * Callers:
 *     _lambda_b5963e117fe1767c779e8f4655192291_::operator() @ 0x18002BF14 (_lambda_b5963e117fe1767c779e8f4655192291_--operator().c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
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
    v5 = (TraceLoggingHProvider *)&qword_180599AE8;
    qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
    qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
  }
  result = (unsigned __int8)v5;
  if ( *(_DWORD *)v5[1] > 5u )
  {
    result = TlgKeywordOn(v5[1], 0x200000000000uLL);
    if ( result )
    {
      TlgCreateWsz(&pDesc, *a1);
      return TlgWrite(v3, &unk_1804BA9F5, 0LL, 0LL, 3u, &pData);
    }
  }
  return result;
}
