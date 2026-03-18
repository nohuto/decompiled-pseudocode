/*
 * XREFs of ?wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState@@YA?AW4wil_details_CachedFeatureEnabledState@@PEATwil_details_FeaturePropertyCache@@IHW4wil_FeatureChangeTime@@W4wil_FeatureStore@@P6AHXZ@Z @ 0x1C0163E78
 * Callers:
 *     Feature_19H2_Enablement__private_IsEnabledWithReporting @ 0x1C0163B14 (Feature_19H2_Enablement__private_IsEnabledWithReporting.c)
 *     Feature_19H2_Rollback__private_IsEnabledWithReporting @ 0x1C0163B90 (Feature_19H2_Rollback__private_IsEnabledWithReporting.c)
 *     ?Feature_PenTailDockEvents__private_IsEnabled@@YAHXZ @ 0x1C0163BF0 (-Feature_PenTailDockEvents__private_IsEnabled@@YAHXZ.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1C00E4370 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?AW4wil_details_CachedFeatureEnabledState@@IHW4wil_FeatureChangeTime@@W4wil_FeatureStore@@P6AHXZPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1C0163EF4 (-wil_details_GetCurrentFeatureEnabledState@@YA-AW4wil_details_CachedFeatureEnabledState@@IHW4wil.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5)
{
  unsigned int CurrentFeatureEnabledState; // ebx

  CurrentFeatureEnabledState = *(_DWORD *)a1 & 3;
  if ( !CurrentFeatureEnabledState )
  {
    CurrentFeatureEnabledState = wil_details_GetCurrentFeatureEnabledState(a2, a3);
    wil_details_ModifyFeatureData(
      a1,
      (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback,
      (void *)(CurrentFeatureEnabledState | (unsigned int)(a5 << 16) | (unsigned __int64)(unsigned int)(a4 << 8)));
  }
  return CurrentFeatureEnabledState;
}
