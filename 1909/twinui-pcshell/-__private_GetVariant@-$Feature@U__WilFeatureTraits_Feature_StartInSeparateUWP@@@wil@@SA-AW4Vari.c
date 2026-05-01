/*
 * XREFs of ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA?AW4Variant_StartInSeparateUWP@@W4VariantReportingKind@2@_N@Z @ 0x18007ADD8
 * Callers:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x180017710 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?Close@CStartExperienceManager@@UEAAJXZ @ 0x1801B64B0 (-Close@CStartExperienceManager@@UEAAJXZ.c)
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801B6B80 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B7A00 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B832C (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x18031D3D4 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x18007AE48 (-wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariant.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CA?AW4Variant_StartInSeparateUWP@@XZ @ 0x18007AEDC (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CA-AW4Var.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::__private_GetVariant()
{
  char CachedVariantState; // bl
  char v2; // [rsp+20h] [rbp-28h]
  __int16 v3; // [rsp+64h] [rbp+1Ch]
  int v4; // [rsp+68h] [rbp+20h] BYREF
  __int16 v5; // [rsp+6Ch] [rbp+24h]

  CachedVariantState = wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::GetCachedVariantState();
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::GetCachedVariantState();
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  v2 = CachedVariantState;
  wil_details_FeaturePropertyCache_ReportVariantUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::GetFeatureVariantPropertyCache'::`2'::data,
    18493822LL,
    &v4,
    1LL,
    v2,
    2);
  return CachedVariantState;
}
