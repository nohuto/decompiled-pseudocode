/*
 * XREFs of ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x1C0163DB0
 * Callers:
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?AW4wil_details_CachedFeatureEnabledState@@IHW4wil_FeatureChangeTime@@W4wil_FeatureStore@@P6AHXZPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1C0163EF4 (-wil_details_GetCurrentFeatureEnabledState@@YA-AW4wil_details_CachedFeatureEnabledState@@IHW4wil.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x1C0164010 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1C01DC11C (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 */

__int64 __fastcall wil_QueryFeatureState(struct wil_FeatureState *a1, unsigned int a2, int a3)
{
  unsigned int FeatureState; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  PVOID v10[12]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v11[208]; // [rsp+90h] [rbp-E8h] BYREF

  FeatureState = 0;
  if ( !g_wil_details_preventOnDemandStagingConfigReads )
  {
    memset(v10, 0, 0x58uLL);
    if ( !(unsigned int)wil_details_StagingConfig_Load(v10, v7, v8, v11) )
    {
      FeatureState = wil_details_StagingConfig_QueryFeatureState((struct wil_details_StagingConfig *)v10, a1, a2, a3);
      if ( LODWORD(v10[10]) )
        ExFreePoolWithTag(v10[7], 0x4C4957u);
    }
  }
  return FeatureState;
}
