/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NXZ @ 0x1800A54E0
 * Callers:
 *     ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x1800A2800 (-GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU-$IVec.c)
 *     ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x1800A2910 (-GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRI.c)
 *     ?IsAppActive@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x1800A3D20 (-IsAppActive@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@.c)
 *     ?StartUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x1800A4F50 (-StartUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ.c)
 *     ?StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x1800A5050 (-StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ.c)
 *     ?TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@EW4AppLimitsTerminationType@2345@@Z @ 0x1800A5200 (-TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHS.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800A2B3C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800A4A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@CAX_NW.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::ReportUsageToService(v2, 3u, v3);
  return v1;
}
