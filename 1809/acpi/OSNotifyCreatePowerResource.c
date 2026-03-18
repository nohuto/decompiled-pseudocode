/*
 * XREFs of OSNotifyCreatePowerResource @ 0x1C002CD14
 * Callers:
 *     OSNotifyCreate @ 0x1C001CF10 (OSNotifyCreate.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C002CD60 (ACPIBuildPowerResourceRequest.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C002CE3C (ACPIBuildPowerResourceExtension.c)
 */

__int64 __fastcall OSNotifyCreatePowerResource(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  unsigned __int16 v5; // r9
  int v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1;
  v2 = ACPIBuildPowerResourceExtension(a1, &v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 15;
LABEL_6:
    v6 = v2;
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      v5,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      v1,
      v6);
    return v3;
  }
  v1 = v7;
  v2 = ACPIBuildPowerResourceRequest(v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 16;
    goto LABEL_6;
  }
  return v3;
}
