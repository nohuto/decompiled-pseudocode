/*
 * XREFs of Feature_19H2_Enablement__private_IsEnabledWithReporting @ 0x1401BEC08
 * Callers:
 *     Feature_BamQosGrouping__private_areDependenciesEnabled @ 0x1401BED60 (Feature_BamQosGrouping__private_areDependenciesEnabled.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400E86A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState @ 0x1402A35E0 (wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_19H2_Enablement__private_IsEnabledWithReporting()
{
  unsigned int v0; // ebx

  v0 = wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState(
         (unsigned int)&Feature_19H2_Enablement__private_propertyCache,
         20455539,
         0,
         3) == 2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_19H2_Enablement__private_propertyCache,
    20455539LL,
    (__int64)&Feature_19H2_Enablement_logged_traits,
    v0,
    0);
  return v0;
}
