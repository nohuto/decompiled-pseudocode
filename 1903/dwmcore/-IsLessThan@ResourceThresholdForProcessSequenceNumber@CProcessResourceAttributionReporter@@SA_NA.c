/*
 * XREFs of ?IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NAEBV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@_K@Z @ 0x1800C90F8
 * Callers:
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x180031F60 (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPsn.c)
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1800D1870 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber::IsLessThan(
        unsigned __int64 **a1,
        unsigned __int64 a2)
{
  return **a1 < a2;
}
