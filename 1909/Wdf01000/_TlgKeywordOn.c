/*
 * XREFs of _TlgKeywordOn @ 0x1C0043680
 * Callers:
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C004284C (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     imp_WdfDriverCreate @ 0x1C004D2A0 (imp_WdfDriverCreate.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C004D770 (imp_WdfDriverErrorReportApiMissing.c)
 *     TraceLoggingProviderEnabled @ 0x1C005AE10 (TraceLoggingProviderEnabled.c)
 *     LogDriverInfoStream @ 0x1C00627EC (LogDriverInfoStream.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0092BF8 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall TlgKeywordOn(const _TlgProvider_t *hProvider, unsigned __int64 keyword)
{
  char v2; // r8

  v2 = 0;
  if ( !keyword || (keyword & hProvider->KeywordAny) != 0 && (keyword & hProvider->KeywordAll) == hProvider->KeywordAll )
    return 1;
  return v2;
}
