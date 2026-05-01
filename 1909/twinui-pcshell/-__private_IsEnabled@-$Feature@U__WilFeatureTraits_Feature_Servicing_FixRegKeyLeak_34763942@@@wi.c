/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763942@@@wil@@SA_NXZ @ 0x1800903F8
 * Callers:
 *     ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180073BB0 (-SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763942@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180090244 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_3476.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763942@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180090394 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763942@@@w.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763942>::__private_IsEnabled(
        __int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763942>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763942>::ReportUsageToService(v2, v3, v4);
  return v1;
}
