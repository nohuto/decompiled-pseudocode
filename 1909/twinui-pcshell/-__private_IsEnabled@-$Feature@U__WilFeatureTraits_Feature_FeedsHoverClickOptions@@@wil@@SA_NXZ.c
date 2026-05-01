/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@wil@@SA_NXZ @ 0x180096594
 * Callers:
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x180093EB0 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 *     ?OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x180094208 (-OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800931F4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@wil.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800945EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@wil@@CAX_NW.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::ReportUsageToService(v2, v3, v4);
  return v1;
}
