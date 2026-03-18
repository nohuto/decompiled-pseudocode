/*
 * XREFs of DispBrokerGetCurrentModeImpl @ 0x1C01366E0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C015C07C (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

__int64 DispBrokerGetCurrentModeImpl()
{
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_DesktopDisplayBroker__private_propertyCache,
    12773644,
    (unsigned int)&unk_1C02CA468,
    0);
  return 0LL;
}
