/*
 * XREFs of ?Feature_PenTailDockEvents__private_IsEnabled@@YAHXZ @ 0x1C0163BF0
 * Callers:
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C0163CF4 (-SetPenHotKeys@@YAXXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00E413C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState@@YA?AW4wil_details_CachedFeatureEnabledState@@PEATwil_details_FeaturePropertyCache@@IHW4wil_FeatureChangeTime@@W4wil_FeatureStore@@P6AHXZ@Z @ 0x1C0163E78 (-wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState@@YA-AW4wil_details_CachedFeatureE.c)
 */

_BOOL8 Feature_PenTailDockEvents__private_IsEnabled(void)
{
  BOOL v0; // ebx

  v0 = wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState(
         &Feature_PenTailDockEvents__private_propertyCache,
         20840718LL,
         1LL) == 2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_PenTailDockEvents__private_propertyCache,
    20840718LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C02DD768,
    v0,
    3);
  return v0;
}
