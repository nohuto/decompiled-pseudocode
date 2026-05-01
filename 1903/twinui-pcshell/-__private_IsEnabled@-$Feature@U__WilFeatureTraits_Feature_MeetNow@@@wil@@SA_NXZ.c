/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_MeetNow@@@wil@@SA_NXZ @ 0x18008E7C4
 * Callers:
 *     ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18008E5D0 (-GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUII.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MeetNow@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18008E484 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MeetNow@@@wil@@CA-AW4wil_det.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MeetNow@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008E760 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MeetNow@@@wil@@CAX_NW4ReportingKind@.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_MeetNow>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_MeetNow>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_MeetNow>::ReportUsageToService(v2, v3, v4);
  return v1;
}
