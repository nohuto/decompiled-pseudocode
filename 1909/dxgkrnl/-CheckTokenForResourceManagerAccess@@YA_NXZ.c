/*
 * XREFs of ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C01810F8
 * Callers:
 *     DxgkGetYieldPercentage @ 0x1C0180BD0 (DxgkGetYieldPercentage.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1C0180E70 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C025FE30 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkSetMemoryBudgetTarget @ 0x1C0260520 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C02607D0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkSetYieldPercentage @ 0x1C0261100 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall CheckTokenForResourceManagerAccess(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 37990);
  return v2 && (int)RtlCheckTokenMembership(0LL, v2, &v4) >= 0 && v4;
}
