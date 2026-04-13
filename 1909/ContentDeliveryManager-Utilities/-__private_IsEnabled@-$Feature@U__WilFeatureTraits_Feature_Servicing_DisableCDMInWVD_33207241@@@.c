/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241@@@wil@@SA_NXZ @ 0x18001369C
 * Callers:
 *     _lambda_67d3978e1092d2b882811411f68ad6cb_::operator() @ 0x18000B8AC (_lambda_67d3978e1092d2b882811411f68ad6cb_--operator().c)
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x1800283A4 (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180014824 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33.c)
 */

bool wil::Feature<__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241>::__private_IsEnabled()
{
  bool v0; // bl
  __int16 v2; // [rsp+44h] [rbp+Ch]
  int v3; // [rsp+48h] [rbp+10h] BYREF
  __int16 v4; // [rsp+4Ch] [rbp+14h]

  v0 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241>::GetCachedFeatureEnabledState() == 2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241>::GetCachedFeatureEnabledState();
  LOBYTE(v2) = 2;
  v4 = v2;
  v3 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241>::GetFeaturePropertyCache'::`2'::data,
    0x1FAB3C9u,
    (const struct FEATURE_LOGGED_TRAITS *)&v3,
    v0,
    3);
  return v0;
}
