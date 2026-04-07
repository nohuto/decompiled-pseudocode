/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180024354
 * Callers:
 *     ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180024130 (-GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004AFD8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA-AW4w.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18004D640 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 0;
  v5 = 1;
  v6 = v4;
  return wil::details::ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data,
           1470244LL,
           &v5,
           0LL,
           3);
}
