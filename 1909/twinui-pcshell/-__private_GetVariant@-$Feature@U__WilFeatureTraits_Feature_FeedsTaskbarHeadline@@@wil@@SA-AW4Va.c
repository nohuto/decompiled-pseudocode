/*
 * XREFs of ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@SA?AW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@2@_N@Z @ 0x180096548
 * Callers:
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x180093EB0 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 *     ?OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x180094208 (-OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 * Callees:
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA?AW4Variant_FeedsTaskbarHeadline@@XZ @ 0x180093380 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA-AW4V.c)
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CAX_NW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@2@_K@Z @ 0x1800946C0 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@C.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_GetVariant()
{
  char CachedVariantState; // bl
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9

  CachedVariantState = wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetCachedVariantState();
  wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::ReportVariantUsageToService(
    v1,
    CachedVariantState,
    v2,
    v3);
  return CachedVariantState;
}
