/*
 * XREFs of _TlgKeywordOn @ 0x1C0044500
 * Callers:
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C004367C (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     imp_WdfDriverCreate @ 0x1C004D9C0 (imp_WdfDriverCreate.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C004DE80 (imp_WdfDriverErrorReportApiMissing.c)
 *     LogDriverInfoStream @ 0x1C006255C (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall TlgKeywordOn(const _TlgProvider_t *keyword, unsigned __int64 hProvider)
{
  char v2; // r8

  v2 = 0;
  if ( !hProvider
    || (hProvider & Tlgg_TelemetryProviderProv.KeywordAny) != 0
    && (hProvider & Tlgg_TelemetryProviderProv.KeywordAll) == Tlgg_TelemetryProviderProv.KeywordAll )
  {
    return 1;
  }
  return v2;
}
