/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004AFD8
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180018510 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800193B0 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180024354 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4Reportin.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180033E30 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800342E4 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18004B08C (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA-AW4.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetCachedFeatureEnabledState(__int64 a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  unsigned int CurrentFeatureEnabledState; // eax
  int v4; // edi
  __int64 (__fastcall *v5)(signed __int32 *, void *); // rdx
  unsigned __int64 v6; // r8
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v8) = a1;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data & 3;
  v2 = v1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    v8 = 0;
    CurrentFeatureEnabledState = wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetCurrentFeatureEnabledState(
                                   a1,
                                   &v8,
                                   &v9);
    v4 = (`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
    if ( !v1 )
    {
      v4 = v9;
      v2 = CurrentFeatureEnabledState;
    }
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data,
      3);
    if ( v1 )
    {
      v6 = v8;
      v5 = (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetHasNotificationStateCallback;
    }
    else
    {
      v5 = (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
      v6 = v2 | (unsigned int)(v4 << 16) | (unsigned __int64)(unsigned int)(v8 << 8);
    }
    wil_details_ModifyFeatureData(
      (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data,
      v5,
      (void *)v6);
  }
  return v2;
}
