/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180008F4C
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x1800090B0 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 *     ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z @ 0x1800095A0 (-WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180005814 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x180005F44 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x180006234 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x1800063F0 (-wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000995C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(
        struct wil_FeatureState *a1,
        int a2,
        __int64 a3,
        int a4,
        volatile signed __int32 *a5)
{
  int *v5; // rbx
  int v7; // r13d
  int FeatureState; // esi
  int v10; // r14d
  HANDLE ProcessHeap; // rax
  bool v12; // si
  _BOOL8 v13; // rbx
  signed __int32 v14; // r14d
  volatile signed __int32 v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v18[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h]
  LPVOID lpMem; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+90h] [rbp-70h]
  _BYTE v22[208]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = &v17;
  v17 = 1;
  v7 = (unsigned __int8)a3;
  FeatureState = 0;
  v10 = *a5 & 3;
  if ( v10 )
    v5 = 0LL;
  if ( v5 )
    *v5 = 0;
  if ( !g_wil_details_preventOnDemandStagingConfigReads
    && !(unsigned int)wil_details_StagingConfig_Load((__int64)v18, a4, a3, v22) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState((struct wil_details_StagingConfig *)v18, a1, a2, v7);
    if ( v5 )
      *v5 = wil_details_StagingConfig_AreAnyFeaturesConfigured((struct wil_details_StagingConfig *)v18);
    if ( v21 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
      lpMem = 0LL;
      v19 = 0LL;
    }
  }
  v12 = FeatureState != 0;
  if ( !v10 )
  {
    v13 = v17 != 0;
    do
    {
      v16 = *a5;
      v16 = *a5;
      v14 = v16;
    }
    while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                            (union wil_details_FeaturePropertyCache *)&v16,
                            (void *)(v13 + 1))
         && v14 != _InterlockedCompareExchange(a5, v16, v14) );
    if ( !v17 )
      wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        &wil::details::g_enabledStateManager,
        a5,
        0LL);
  }
  return v12;
}
