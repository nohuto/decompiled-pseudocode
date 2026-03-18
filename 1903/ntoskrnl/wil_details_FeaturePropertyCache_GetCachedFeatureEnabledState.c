/*
 * XREFs of wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState @ 0x1402A3880
 * Callers:
 *     Feature_19H2_Enablement__private_IsEnabledWithReporting @ 0x1401BE114 (Feature_19H2_Enablement__private_IsEnabledWithReporting.c)
 *     Feature_19H2_Rollback__private_IsEnabledWithReporting @ 0x1401BE1A0 (Feature_19H2_Rollback__private_IsEnabledWithReporting.c)
 *     Feature_BamQosGrouping__private_IsEnabled @ 0x1401BE204 (Feature_BamQosGrouping__private_IsEnabled.c)
 *     Feature_SchedulerFavoredCoreRotation__private_IsEnabled @ 0x1401BE290 (Feature_SchedulerFavoredCoreRotation__private_IsEnabled.c)
 *     Feature_SoftCoreParking_Policy__private_IsEnabled @ 0x1401BEC7C (Feature_SoftCoreParking_Policy__private_IsEnabled.c)
 * Callees:
 *     wil_details_ModifyFeatureData @ 0x1400AFAB4 (wil_details_ModifyFeatureData.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1402A3934 (wil_details_GetCurrentFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6)
{
  __int64 CurrentFeatureEnabledState; // rbx
  volatile signed __int32 *v9; // rcx
  __int64 (__fastcall *v10)(volatile signed __int32 *, __int64); // rdx
  unsigned __int64 v11; // r8
  int v13; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(CurrentFeatureEnabledState) = *a1 & 3;
  if ( !(_DWORD)CurrentFeatureEnabledState )
  {
    CurrentFeatureEnabledState = (unsigned int)wil_details_GetCurrentFeatureEnabledState(
                                                 a2,
                                                 a3,
                                                 a4,
                                                 a3,
                                                 a6,
                                                 (__int64)&a5,
                                                 (__int64)&v13);
    if ( !a4 )
    {
      v9 = a1;
      if ( !g_wil_details_featurePropertyCacheChangeNotification )
      {
        v11 = a5;
        v10 = (__int64 (__fastcall *)(volatile signed __int32 *, __int64))wil_details_SetHasNotificationStateCallback;
        goto LABEL_6;
      }
      g_wil_details_featurePropertyCacheChangeNotification(a1, 0LL);
    }
    v10 = (__int64 (__fastcall *)(volatile signed __int32 *, __int64))wil_details_SetEnabledAndHasNotificationStateCallback;
    v9 = a1;
    v11 = CurrentFeatureEnabledState | (unsigned int)(v13 << 16) | (unsigned __int64)(unsigned int)(a5 << 8);
LABEL_6:
    wil_details_ModifyFeatureData(v9, v10, v11);
  }
  return (unsigned int)CurrentFeatureEnabledState;
}
