/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800E59A8
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180089E58 (--1CVisual@@MEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008ABF0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4Report.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800AB0C4 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x1800AC564 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800ACDE4 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetCachedFeatureEnabledState(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int FeatureEnabledState; // eax
  int v5; // esi
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edi
  int v9; // ebp
  unsigned int (__fastcall *v10)(signed __int32 *, void *); // rdx
  void *v11; // r8

  v3 = `wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState((wil::details *)0xCB67FA, a2, a3);
    v5 = FeatureEnabledState & 0x80;
    v6 = (FeatureEnabledState >> 6) & 1;
    v7 = FeatureEnabledState & 0xFFFFFF3F;
    if ( !v7 || (v8 = 2, v7 != 2) )
      v8 = 1;
    v9 = (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
    if ( v3 )
      v8 = v3;
    else
      v9 = v6;
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data,
      0);
    if ( v3 )
    {
      v10 = (unsigned int (__fastcall *)(signed __int32 *, void *))wil_details_SetHasNotificationStateCallback;
      v11 = (void *)((v5 != 0) + 1LL);
    }
    else
    {
      v10 = (unsigned int (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
      v11 = (void *)(v8 | (unsigned int)(v9 << 16) | ((-(__int64)(v5 != 0) & 0x100) + 256));
    }
    wil_details_ModifyFeatureData(
      (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data,
      v10,
      v11);
    return v8;
  }
  return v3;
}
