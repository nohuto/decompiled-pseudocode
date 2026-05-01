/*
 * XREFs of ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x1800E2868
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x1800650C8 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x1800E2B90 (-wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x1800E2DD0 (-wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1800E2E0C (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x1800E3100 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 */

__int64 __fastcall wil_QueryFeatureState(
        struct wil_FeatureState *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned int FeatureState; // edi
  int v6; // esi
  _BYTE v10[96]; // [rsp+30h] [rbp-158h] BYREF
  _BYTE v11[208]; // [rsp+90h] [rbp-F8h] BYREF

  FeatureState = 0;
  v6 = a3;
  if ( a5 )
    *a5 = 0;
  if ( !g_wil_details_preventOnDemandStagingConfigReads
    && !(unsigned int)wil_details_StagingConfig_Load(v10, a4, a3, v11) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState((struct wil_details_StagingConfig *)v10, a1, a2, v6);
    if ( a5 )
      *a5 = wil_details_StagingConfig_AreAnyFeaturesConfigured((struct wil_details_StagingConfig *)v10);
    wil_details_StagingConfig_Free((struct wil_details_StagingConfig *)v10);
  }
  return FeatureState;
}
