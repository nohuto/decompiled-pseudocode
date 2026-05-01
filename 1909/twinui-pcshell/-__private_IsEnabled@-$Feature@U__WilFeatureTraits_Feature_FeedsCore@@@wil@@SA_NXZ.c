/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NXZ @ 0x18009FDA8
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800947E8 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NXZ @ 0x18009D600 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NXZ.c)
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5190 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009312C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@CA-AW4wil_d.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18009457C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@CAX_NW4ReportingKin.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::ReportUsageToService(v2, 3u, v3);
  return v1;
}
