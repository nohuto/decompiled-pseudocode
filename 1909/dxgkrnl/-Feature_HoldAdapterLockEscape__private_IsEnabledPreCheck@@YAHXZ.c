/*
 * XREFs of ?Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck@@YAHXZ @ 0x1C0041F4C
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck(void)
{
  int v1; // [rsp+20h] [rbp-18h]

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_HoldAdapterLockEscape__private_propertyCache,
    18916184LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00784F4,
    0,
    v1);
  return 1LL;
}
