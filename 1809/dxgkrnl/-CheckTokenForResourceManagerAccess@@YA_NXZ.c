/*
 * XREFs of ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C015CB1C
 * Callers:
 *     DxgkGetYieldPercentage @ 0x1C015C5F0 (DxgkGetYieldPercentage.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1C015C890 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C022AF30 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkSetMemoryBudgetTarget @ 0x1C022B620 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C022B8D0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkSetYieldPercentage @ 0x1C022C1F0 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall CheckTokenForResourceManagerAccess(__int64 a1)
{
  __int64 v1; // rdx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v1 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 2532);
  return v1 && (int)RtlCheckTokenMembership(0LL, v1, &v3) >= 0 && v3;
}
