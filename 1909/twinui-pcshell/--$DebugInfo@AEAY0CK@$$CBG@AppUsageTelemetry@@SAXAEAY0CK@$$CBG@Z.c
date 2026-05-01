/*
 * XREFs of ??$DebugInfo@AEAY0CK@$$CBG@AppUsageTelemetry@@SAXAEAY0CK@$$CBG@Z @ 0x1800B4208
 * Callers:
 *     ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800B5404 (-UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B2940 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 */

int __fastcall AppUsageTelemetry::DebugInfo<unsigned short const (&)[42]>(__int64 a1)
{
  const struct _TlgProvider_t *v1; // rax
  TraceLoggingHProvider v2; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v1 = AppUsageTelemetry::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    TlgCreateWsz(&pDesc, L"Filtered out active view not in switchers");
    LODWORD(v1) = TlgWrite(v2, &unk_180509EA4, 0LL, 0LL, 3u, &pData);
  }
  return (int)v1;
}
