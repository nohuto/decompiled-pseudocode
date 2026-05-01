/*
 * XREFs of ?HampSystemCdplIsManaged@@YAKXZ @ 0x18003F4FC
 * Callers:
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x18003F43C (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006A014 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CdplAppDataProtection@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800470DC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CdplAppDataProtection@@@wil@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800493A4 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 */

__int64 HampSystemCdplIsManaged(void)
{
  __int16 v1; // [rsp+44h] [rbp+Ch]
  int v2; // [rsp+48h] [rbp+10h] BYREF
  __int16 v3; // [rsp+4Ch] [rbp+14h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_CdplAppDataProtection>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CdplAppDataProtection>::GetCachedFeatureEnabledState();
  LOBYTE(v1) = 1;
  v2 = 0;
  v3 = v1;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CdplAppDataProtection>::GetFeaturePropertyCache'::`2'::data,
    14502445LL,
    &v2);
  return 0LL;
}
