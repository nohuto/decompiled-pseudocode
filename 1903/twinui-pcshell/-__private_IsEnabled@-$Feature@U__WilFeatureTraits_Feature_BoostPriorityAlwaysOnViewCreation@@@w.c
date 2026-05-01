/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation@@@wil@@SA_NXZ @ 0x18008E26C
 * Callers:
 *     ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18004F6B0 (-OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     ?_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180180CC4 (-_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18008DE88 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCre.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008E208 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation@@@.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation>::__private_IsEnabled(
        __int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation>::ReportUsageToService(v2, v3, v4);
  return v1;
}
