/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800E5D50
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800EAF28 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800AB0C4 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800ACDE4 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800E5E04 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameS.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetCachedFeatureEnabledState(
        __int64 a1)
{
  unsigned int v1; // ebx
  char v2; // si
  unsigned int CurrentFeatureEnabledState; // eax
  int v4; // edi
  unsigned int (__fastcall *v5)(signed __int32 *, void *); // rdx
  unsigned __int64 v6; // r8
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v8) = a1;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data & 3) != 0 )
  {
    v2 = 0;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
      return v1;
  }
  else
  {
    v2 = 1;
  }
  v8 = 0;
  CurrentFeatureEnabledState = wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetCurrentFeatureEnabledState(
                                 a1,
                                 &v8,
                                 &v9);
  v4 = (`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v2 )
  {
    v4 = v9;
    v1 = CurrentFeatureEnabledState;
  }
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( v2 )
  {
    v5 = (unsigned int (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
    v6 = v1 | (unsigned int)(v4 << 16) | (unsigned __int64)(unsigned int)(v8 << 8);
  }
  else
  {
    v6 = v8;
    v5 = (unsigned int (__fastcall *)(signed __int32 *, void *))wil_details_SetHasNotificationStateCallback;
  }
  wil_details_ModifyFeatureData(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data,
    v5,
    (void *)v6);
  return v1;
}
