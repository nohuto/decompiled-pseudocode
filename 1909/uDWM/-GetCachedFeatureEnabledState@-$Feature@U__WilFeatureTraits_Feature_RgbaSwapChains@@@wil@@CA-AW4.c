/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D230
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18002C2F8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4Reporti.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180010DDC (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18003428C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18004D2E4 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetCachedFeatureEnabledState(__int64 a1)
{
  unsigned int v1; // ebx
  char v2; // si
  unsigned int CurrentFeatureEnabledState; // eax
  int v4; // edi
  __int64 (__fastcall *v5)(signed __int32 *, void *); // rdx
  unsigned __int64 v6; // r8
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v8) = a1;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data & 3) != 0 )
  {
    v2 = 0;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
      return v1;
  }
  else
  {
    v2 = 1;
  }
  v8 = 0;
  CurrentFeatureEnabledState = wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetCurrentFeatureEnabledState(
                                 a1,
                                 &v8,
                                 &v9);
  v4 = (`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v2 )
  {
    v4 = v9;
    v1 = CurrentFeatureEnabledState;
  }
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( v2 )
  {
    v5 = (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
    v6 = v1 | (unsigned int)(v4 << 16) | (unsigned __int64)(unsigned int)(v8 << 8);
  }
  else
  {
    v6 = v8;
    v5 = (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetHasNotificationStateCallback;
  }
  wil_details_ModifyFeatureData(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data,
    v5,
    (void *)v6);
  return v1;
}
