/*
 * XREFs of ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180039380
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180026B20 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003AF30 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180039404 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 */

__int64 __fastcall RmpPolicyIsHostCommitSaveEligible(struct _RM_POLICY *a1, struct _RM_ACTIVITY_HOST *a2)
{
  unsigned int v2; // edi
  int v4; // eax
  int v5; // r11d
  unsigned int v6; // r11d
  int v7; // eax
  unsigned int v8; // r11d

  v2 = 0;
  if ( (*((_BYTE *)a2 + 1160) & 8) != 0 || (v4 = 1, (*((_BYTE *)a2 + 1162) & 8) != 0) )
    v4 = 0;
  v5 = 0;
  if ( (*((_WORD *)a2 + 732) & 0x200) == 0 )
    v5 = v4;
  v6 = ~(*((_DWORD *)a2 + 310) >> 2) & v5;
  if ( v6 )
  {
    v7 = RmpPolicyComputeDesiredEmptyState(a1, a2, 2LL);
    if ( ((unsigned __int8)v7 & (unsigned __int8)*((_DWORD *)a2 + 311) & 0x27) == v7 )
      return v8;
    return v2;
  }
  return v6;
}
