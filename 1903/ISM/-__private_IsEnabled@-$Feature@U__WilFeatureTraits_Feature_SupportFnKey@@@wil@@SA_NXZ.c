/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@SA_NXZ @ 0x180035318
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180019A0C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180019EC8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180020B84 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ?CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800A3AB4 (-CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180034F3C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@CA-AW4wi.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180035264 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@CAX_NW4Reporting.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_SupportFnKey>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_SupportFnKey>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_SupportFnKey>::ReportUsageToService(v2, v3, v4);
  return v1;
}
