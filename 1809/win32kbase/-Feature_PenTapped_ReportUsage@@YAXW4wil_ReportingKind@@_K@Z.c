/*
 * XREFs of ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C012EF3C
 * Callers:
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C012F344 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

_UNKNOWN **Feature_PenTapped_ReportUsage()
{
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           (__int64)&Feature_PenTapped__private_propertyCache,
           0xDA33DFu,
           (__int64)&unk_1C01A7424,
           1u,
           2u);
}
