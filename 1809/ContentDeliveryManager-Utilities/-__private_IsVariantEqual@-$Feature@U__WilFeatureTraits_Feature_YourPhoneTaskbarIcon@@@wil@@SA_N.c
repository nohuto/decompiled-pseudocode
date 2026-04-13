/*
 * XREFs of ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@SA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@2@_N@Z @ 0x1800141E4
 * Callers:
 *     _lambda_437d9aff03d6676e5c9009da627b8fcc_::operator() @ 0x18000B238 (_lambda_437d9aff03d6676e5c9009da627b8fcc_--operator().c)
 * Callees:
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@2@_K@Z @ 0x18001434C (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@C.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CA?AW4Variant_YourPhoneTaskbarIcon@@XZ @ 0x180014418 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CA-AW4V.c)
 */

bool wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::__private_IsVariantEqual()
{
  char CachedVariantState; // bl
  __int64 v1; // rcx
  __int64 v2; // rcx

  CachedVariantState = wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState();
  LOBYTE(v1) = CachedVariantState == 3;
  wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportVariantUsageToService(v1);
  if ( !CachedVariantState )
  {
    LOBYTE(v2) = 1;
    wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportVariantUsageToService(v2);
  }
  return CachedVariantState == 3;
}
