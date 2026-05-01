/*
 * XREFs of ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x180241EBC
 * Callers:
 *     ??$PeoplePaneViewChanged@AEAW4PeoplePaneViewChange@@@CommonPeopleTelemetry@@SAXAEAW4PeoplePaneViewChange@@@Z @ 0x18023D96C (--$PeoplePaneViewChanged@AEAW4PeoplePaneViewChange@@@CommonPeopleTelemetry@@SAXAEAW4PeoplePaneVi.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLogging@@P6AXXZ@Z @ 0x1801B0C34 (-get@-$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLog.c)
 */

char __fastcall CommonPeopleTelemetry::PeoplePaneViewChanged_(__int64 a1, int a2)
{
  _QWORD *v3; // rax
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  int v7; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v3 = wil::details::static_lazy<CommonPeopleTelemetryLogging>::get(
         a1,
         (void (__cdecl *)())lambda_d2dfcefe90c696f2f984ba2092e12d6b_::_lambda_invoker_cdecl_);
  v4 = (const struct _TlgProvider_t *)v3[1];
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v3) = TlgKeywordOn(v4, 0x200000000000uLL);
    if ( (_BYTE)v3 )
    {
      v11 = 0;
      v9 = &v7;
      v7 = a2;
      v10 = 4;
      LOBYTE(v3) = TlgWrite(v5, &unk_1804F1AD4, 0LL, 0LL, 3u, &pData);
    }
  }
  return (char)v3;
}
