/*
 * XREFs of ?Feature_ModernStandbyDFx__private_IsEnabledPreCheck@@YAHXZ @ 0x1C0032E00
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0166B3C (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 Feature_ModernStandbyDFx__private_IsEnabledPreCheck(void)
{
  int v1; // [rsp+20h] [rbp-18h]

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_ModernStandbyDFx__private_propertyCache,
    18916215LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00767B8,
    1,
    v1);
  return 1LL;
}
