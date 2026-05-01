/*
 * XREFs of ??$TerminateAppRequested@AEAPEBGAEAE@AppUsageTelemetry@@SAXAEAPEBGAEAE@Z @ 0x1800AF424
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_1efbb5b924668bd981b6f09bcb2700eb__&_::Run @ 0x1800B34B0 (wil--details--functor_wrapper_void__lambda_1efbb5b924668bd981b6f09bcb2700eb__-_--Run.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B2940 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall AppUsageTelemetry::TerminateAppRequested<unsigned short const * &,unsigned char &>(
        LPCWSTR *a1,
        _BYTE *a2)
{
  const struct _TlgProvider_t *v4; // rax
  unsigned __int8 v5; // r11
  bool v6; // zf
  TraceLoggingHProvider v7; // r10
  bool v9; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  bool *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  __int64 *v15; // [rsp+80h] [rbp+37h]
  __int64 v16; // [rsp+88h] [rbp+3Fh]

  v4 = AppUsageTelemetry::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = TlgKeywordOn(v4, 0x400000000000uLL);
    if ( (_BYTE)v4 )
    {
      TlgCreateWsz(&pDesc, *a1);
      v6 = *a2 == v5;
      v13 = &v9;
      v15 = &v10;
      v9 = !v6;
      v14 = 1LL;
      v10 = 0x2000000LL;
      v16 = 8LL;
      LOBYTE(v4) = TlgWrite(v7, &unk_180509D71, 0LL, 0LL, 5u, &pData);
    }
  }
  return (char)v4;
}
