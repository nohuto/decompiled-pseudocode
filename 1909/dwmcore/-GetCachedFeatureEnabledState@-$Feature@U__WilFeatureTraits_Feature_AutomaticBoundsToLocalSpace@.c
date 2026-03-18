/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000E204
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18000E140 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@C.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800AFF64 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800B1284 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x1800B2724 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetCachedFeatureEnabledState(
        __int64 a1,
        unsigned int a2,
        enum FEATURE_CHANGE_TIME a3)
{
  unsigned int v3; // ebx
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  int v5; // esi
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edi
  int v9; // ebp
  int (*v10)(union wil_details_FeaturePropertyCache *, void *); // rdx
  void *v11; // r8

  v3 = `wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetFeaturePropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0xF4CC15, a2, a3);
    v5 = FeatureEnabledState & 0x80;
    v6 = ((unsigned int)FeatureEnabledState >> 6) & 1;
    v7 = FeatureEnabledState & 0xFFFFFF3F;
    if ( !v7 || (v8 = 2, v7 != 2) )
      v8 = 1;
    v9 = (`wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
    if ( v3 )
      v8 = v3;
    else
      v9 = v6;
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      &wil::details::g_enabledStateManager,
      &`wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetFeaturePropertyCache'::`2'::data,
      0LL);
    if ( v3 )
    {
      v10 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetHasNotificationStateCallback;
      v11 = (void *)((v5 != 0) + 1LL);
    }
    else
    {
      v10 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
      v11 = (void *)(v8 | (unsigned int)(v9 << 16) | ((-(__int64)(v5 != 0) & 0x100) + 256));
    }
    wil_details_ModifyFeatureData(
      (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetFeaturePropertyCache'::`2'::data,
      v10,
      v11);
    return v8;
  }
  return v3;
}
