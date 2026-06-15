/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000C2A4
 * Callers:
 *     AudioServerGetMixFormat @ 0x18000BC00 (AudioServerGetMixFormat.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000C670 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18000C7C8 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@wil@@C.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180011784 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetCachedFeatureEnabledState(
        __int64 a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  unsigned int CurrentFeatureEnabledState; // eax
  int v4; // edi
  int (*v5)(union wil_details_FeaturePropertyCache *, void *); // rdx
  unsigned __int64 v6; // r8
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v8) = a1;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetFeaturePropertyCache'::`2'::data & 3;
  v2 = v1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetFeaturePropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    v8 = 0;
    CurrentFeatureEnabledState = wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetCurrentFeatureEnabledState(
                                   a1,
                                   &v8,
                                   &v9);
    v4 = (`wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
    if ( !v1 )
    {
      v4 = v9;
      v2 = CurrentFeatureEnabledState;
    }
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      &wil::details::g_enabledStateManager,
      &`wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetFeaturePropertyCache'::`2'::data,
      0LL);
    if ( v1 )
    {
      v6 = v8;
      v5 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetHasNotificationStateCallback;
    }
    else
    {
      v5 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
      v6 = v2 | (unsigned int)(v4 << 16) | (unsigned __int64)(unsigned int)(v8 << 8);
    }
    wil_details_ModifyFeatureData(
      (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetFeaturePropertyCache'::`2'::data,
      v5,
      (void *)v6);
  }
  return v2;
}
