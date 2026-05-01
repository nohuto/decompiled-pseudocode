/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_TaskbarAutoHideServicingBugFix@@@wil@@SA_NXZ @ 0x1800A8DBC
 * Callers:
 *     ?OnCortanaNotifyRelaunch@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800A8C50 (-OnCortanaNotifyRelaunch@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskbarAutoHideServicingBugFix@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800A8AB0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskbarAutoHideServicingBugF.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskbarAutoHideServicingBugFix@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800A8D58 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskbarAutoHideServicingBugFix@@@wil.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_TaskbarAutoHideServicingBugFix>::__private_IsEnabled(
        __int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_TaskbarAutoHideServicingBugFix>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_TaskbarAutoHideServicingBugFix>::ReportUsageToService(v2, v3, v4);
  return v1;
}
