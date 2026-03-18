/*
 * XREFs of ?DxgkIsGraphisPartitionApplication@@YA_NXZ @ 0x1C025E0B8
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00FFF10 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllowGraphicsPartitionUse@DXGGLOBAL@@QEAA?AW4_DXGGLOBAL_GRAPHICS_PARTITION_AVAILABILITY@@XZ @ 0x1C0241C0C (-AllowGraphicsPartitionUse@DXGGLOBAL@@QEAA-AW4_DXGGLOBAL_GRAPHICS_PARTITION_AVAILABILITY@@XZ.c)
 */

char DxgkIsGraphisPartitionApplication(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  char v2; // bl
  __int64 v3; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  int v6; // eax
  char v7; // cl
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-10h] BYREF
  char v11; // [rsp+50h] [rbp+10h] BYREF
  char v12; // [rsp+58h] [rbp+18h] BYREF

  v2 = 1;
  if ( ExGetPreviousMode() != 1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(v1, v0);
    *(_QWORD *)(v3 + 24) = 1261LL;
    WdLogEvent5_WdAssertion(v3);
  }
  Global = DXGGLOBAL::GetGlobal(v1, v0);
  if ( !(unsigned int)DXGGLOBAL::AllowGraphicsPartitionUse((__int64)Global, v5) )
    return 0;
  v9[0] = 2097182LL;
  v9[1] = L"shellExperience";
  v10[0] = 1703960LL;
  v10[1] = L"hevcPlayback";
  v11 = 0;
  v12 = 0;
  v6 = RtlCapabilityCheck(0LL, v9, &v11);
  v7 = v11;
  if ( v6 < 0 )
    v7 = 0;
  v11 = v7;
  if ( (int)RtlCapabilityCheck(0LL, v10, &v12) < 0 )
    return 0;
  if ( !v12 || v11 )
    return 0;
  return v2;
}
