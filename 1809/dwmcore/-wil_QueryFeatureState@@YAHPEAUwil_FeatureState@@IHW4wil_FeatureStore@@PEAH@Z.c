/*
 * XREFs of ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x180087928
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180086384 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 * Callees:
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x1800879F0 (-wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x180087A40 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x180087AD8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
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
  HANDLE ProcessHeap; // rax
  _BYTE v11[56]; // [rsp+30h] [rbp-158h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-120h]
  int v13; // [rsp+80h] [rbp-108h]
  _BYTE v14[208]; // [rsp+90h] [rbp-F8h] BYREF

  FeatureState = 0;
  v6 = a3;
  if ( a5 )
    *a5 = 0;
  if ( !g_wil_details_preventOnDemandStagingConfigReads
    && !(unsigned int)wil_details_StagingConfig_Load(v11, a4, a3, v14) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState((struct wil_details_StagingConfig *)v11, a1, a2, v6);
    if ( a5 )
      *a5 = wil_details_StagingConfig_AreAnyFeaturesConfigured((struct wil_details_StagingConfig *)v11);
    if ( v13 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  return FeatureState;
}
