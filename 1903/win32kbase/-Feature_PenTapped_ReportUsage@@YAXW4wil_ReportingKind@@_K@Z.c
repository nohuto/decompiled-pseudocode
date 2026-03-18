/*
 * XREFs of ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C015BF1C
 * Callers:
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C015C3FC (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

void Feature_PenTapped_ReportUsage()
{
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_PenTapped__private_propertyCache,
    0xDA33DFu,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01EE1E4,
    1,
    2);
}
