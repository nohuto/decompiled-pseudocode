/*
 * XREFs of ??$DebugInfo@AEAY0DD@$$CBG@AppUsageTelemetry@@SAXAEAY0DD@$$CBG@Z @ 0x1800AA028
 * Callers:
 *     ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x1800ACA98 (-OnTerminateTimer@Win32AppStateManager@@AEAAXXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A4000 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 */

int __fastcall AppUsageTelemetry::DebugInfo<unsigned short const (&)[51]>(__int64 a1)
{
  const struct _TlgProvider_t *v1; // rax
  TraceLoggingHProvider v2; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v1 = AppUsageTelemetry::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    TlgCreateWsz(&pDesc, L"Canceling termination timer on completing callback");
    LODWORD(v1) = TlgWrite(v2, &unk_1804E3695, 0LL, 0LL, 3u, &pData);
  }
  return (int)v1;
}
