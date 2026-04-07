/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180033BE4
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x180033B70 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 *     ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z @ 0x180078490 (-WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180010DDC (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18003428C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x18004C5EC (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  union wil_details_FeaturePropertyCache *v4; // rdi
  int v5; // ebx
  bool v7; // si

  v4 = (union wil_details_FeaturePropertyCache *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( a4 )
    v4 = (union wil_details_FeaturePropertyCache *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  v5 = *(_DWORD *)v4 & 3;
  if ( v5 == 1 )
    return 0;
  v7 = (unsigned int)wil_QueryFeatureState(a1) != 0;
  if ( !v5 )
    wil_details_ModifyFeatureData(
      v4,
      (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback,
      (void *)2);
  return v7;
}
