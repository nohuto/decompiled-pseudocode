/*
 * XREFs of wil_QueryFeatureState @ 0x1402A37A0
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1402A3934 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     wil_details_StagingConfig_Load @ 0x1402A3CDC (wil_details_StagingConfig_Load.c)
 *     wil_details_StagingConfig_QueryFeatureState @ 0x1402A3FB8 (wil_details_StagingConfig_QueryFeatureState.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall wil_QueryFeatureState(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int FeatureState; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  PVOID v10[12]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v11[208]; // [rsp+90h] [rbp-E8h] BYREF

  FeatureState = 0;
  if ( g_wil_details_stagingConfigForMachine )
  {
    return (unsigned int)wil_details_StagingConfig_QueryFeatureState(g_wil_details_stagingConfigForMachine, a1, a2, a3);
  }
  else if ( !g_wil_details_preventOnDemandStagingConfigReads )
  {
    memset(v10, 0, 0x58uLL);
    if ( !(unsigned int)wil_details_StagingConfig_Load(v10, v7, v8, v11) )
    {
      FeatureState = wil_details_StagingConfig_QueryFeatureState(v10, a1, a2, a3);
      if ( LODWORD(v10[10]) )
        ExFreePoolWithTag(v10[7], 0x4C4957u);
    }
  }
  return FeatureState;
}
