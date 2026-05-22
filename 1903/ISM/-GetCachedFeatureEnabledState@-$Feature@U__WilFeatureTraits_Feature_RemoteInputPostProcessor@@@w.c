/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001D8B0
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18001D854 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@wil@@CAX_.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001E06C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18001E784 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180029808 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::GetCachedFeatureEnabledState(
        __int64 a1)
{
  unsigned int v1; // ebx
  char v2; // si
  unsigned int CurrentFeatureEnabledState; // eax
  int v4; // edi
  int (*v5)(union wil_details_FeaturePropertyCache *, void *); // rdx
  unsigned __int64 v6; // r8
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v8) = a1;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::GetFeaturePropertyCache'::`2'::data & 3) != 0 )
  {
    v2 = 0;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
      return v1;
  }
  else
  {
    v2 = 1;
  }
  v8 = 0;
  CurrentFeatureEnabledState = wil::Feature<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::GetCurrentFeatureEnabledState(
                                 a1,
                                 &v8,
                                 &v9);
  v4 = (`wil::Feature<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v2 )
  {
    v4 = v9;
    v1 = CurrentFeatureEnabledState;
  }
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    &wil::details::g_enabledStateManager,
    &`wil::Feature<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::GetFeaturePropertyCache'::`2'::data,
    1LL);
  if ( v2 )
  {
    v5 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
    v6 = v1 | (unsigned int)(v4 << 16) | (unsigned __int64)(unsigned int)(v8 << 8);
  }
  else
  {
    v6 = v8;
    v5 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetHasNotificationStateCallback;
  }
  wil_details_ModifyFeatureData(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::GetFeaturePropertyCache'::`2'::data,
    v5,
    (void *)v6);
  return v1;
}
