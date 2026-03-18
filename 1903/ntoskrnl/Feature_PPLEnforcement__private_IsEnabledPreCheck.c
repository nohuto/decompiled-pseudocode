/*
 * XREFs of Feature_PPLEnforcement__private_IsEnabledPreCheck @ 0x14031C7CC
 * Callers:
 *     NtQueryInformationToken @ 0x1405ECF30 (NtQueryInformationToken.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400AF880 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

__int64 Feature_PPLEnforcement__private_IsEnabledPreCheck()
{
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_PPLEnforcement__private_propertyCache,
    19318041LL,
    (__int64)&Feature_PPLEnforcement_logged_traits,
    0,
    3);
  return 1LL;
}
