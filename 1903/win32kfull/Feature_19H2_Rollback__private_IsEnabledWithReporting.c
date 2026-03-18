/*
 * XREFs of Feature_19H2_Rollback__private_IsEnabledWithReporting @ 0x1C0163B90
 * Callers:
 *     ?Feature_19H2_Enablement__private_areDependenciesEnabled@@YAHXZ @ 0x1C0163B70 (-Feature_19H2_Enablement__private_areDependenciesEnabled@@YAHXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00E413C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState@@YA?AW4wil_details_CachedFeatureEnabledState@@PEATwil_details_FeaturePropertyCache@@IHW4wil_FeatureChangeTime@@W4wil_FeatureStore@@P6AHXZ@Z @ 0x1C0163E78 (-wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState@@YA-AW4wil_details_CachedFeatureE.c)
 */

_BOOL8 Feature_19H2_Rollback__private_IsEnabledWithReporting()
{
  BOOL v0; // ebx

  v0 = wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState(
         &Feature_19H2_Rollback__private_propertyCache,
         20442546LL,
         1LL) == 2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_19H2_Rollback__private_propertyCache,
    20442546LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C02DD778,
    v0,
    0);
  return v0;
}
