/*
 * XREFs of ?ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAX_NPEBDPEAD@Z @ 0x18018D370
 * Callers:
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x18018E084 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007641C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800D3E70 (_alloca_probe.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1801278D4 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTraceLoggingMessage(
        wil::TraceLoggingProvider *this,
        __int64 a2,
        const char *a3,
        char *a4)
{
  unsigned __int16 *v5; // rdx
  __int64 v6; // r10
  va_list v7; // r11
  TraceLoggingHProvider v8; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-1048h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-1028h] BYREF
  WCHAR pwsz[2048]; // [rsp+60h] [rbp-1018h] BYREF

  if ( wil::TraceLoggingProvider::IsEnabled_(this, 5u) )
  {
    wil::details::PrintLoggingMessage((wil::details *)pwsz, v5, v6, v7);
    if ( **((_DWORD **)this + 1) > 5u )
    {
      TlgCreateWsz(&pDesc, pwsz);
      TlgWrite(v8, &unk_1804E1371, 0LL, 0LL, 3u, &pData);
    }
  }
}
