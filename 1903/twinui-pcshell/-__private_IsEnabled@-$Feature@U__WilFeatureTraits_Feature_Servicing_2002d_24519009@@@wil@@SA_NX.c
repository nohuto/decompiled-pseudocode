/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_2002d_24519009@@@wil@@SA_NXZ @ 0x180093A90
 * Callers:
 *     ?Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180054588 (-Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experienc.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_2002d_24519009@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800938DC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_2002d_24519009@@@w.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_2002d_24519009@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093A2C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Servicing_2002d_24519009@@@wil@@CAX_.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_Servicing_2002d_24519009>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_Servicing_2002d_24519009>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_Servicing_2002d_24519009>::ReportUsageToService(v2, v3, v4);
  return v1;
}
