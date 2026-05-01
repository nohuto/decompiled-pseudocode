/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180015838
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180013A18 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x180017710 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x180083820 (-KeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Close@CStartExperienceManager@@UEAAJXZ @ 0x1801B64B0 (-Close@CStartExperienceManager@@UEAAJXZ.c)
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801B6B80 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B7A00 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B832C (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x18031D3D4 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180024DA4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801B69E0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CA.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::GetFeaturePropertyCache'::`2'::data,
           18493822LL,
           &v5,
           1LL,
           3);
}
