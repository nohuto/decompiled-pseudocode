/*
 * XREFs of ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x1800986C8
 * Callers:
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800984AC (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800987A4 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x180057810 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 */

void __fastcall ISMTracing::LogSpeechRuntimeListenerFunct_(ISMTracing *this, const unsigned __int16 *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  TraceLoggingHProvider v5; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    v4 = wil::details::static_lazy<ISMTracing>::get(
           v3,
           lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v4[1] > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)v4[1], 1uLL) )
      {
        TlgCreateWsz(&pDesc, a2);
        TlgWrite(v5, &unk_18019C4C0, 0LL, 0LL, 3u, &pData);
      }
    }
  }
}
