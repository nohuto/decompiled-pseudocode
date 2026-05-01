/*
 * XREFs of ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800184EC
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003919C (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001B000 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180020050 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x1800385B4 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall RmpPolicyGetDesiredEmptyOptimizationsForHost(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned int v6; // eax
  _BYTE v8[72]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v9; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v10; // [rsp+98h] [rbp-80h]
  unsigned __int64 v11[10]; // [rsp+B0h] [rbp-68h] BYREF

  if ( (*(_BYTE *)(a2 + 1188) & 0x10) != 0 )
    return 0LL;
  v4 = *(_QWORD *)(a2 + 56);
  memset_0(v8, 0, 0x80uLL);
  RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v4, (struct _RM_SYSTEM_MEMORY_METRICS *)v11);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)a1,
    (struct _RM_REMEDIATION_ACTIONS *)(a1 + 56),
    (struct _RM_SYSTEM_MEMORY_METRICS *)v11,
    v11[0],
    (struct _RM_RESOURCE_USAGE_LIMITS *)v8);
  v5 = v11[7];
  v6 = 0;
  *(_WORD *)(v4 + 188) = 0;
  if ( (v5 > v10 && *(_DWORD *)(a1 + 100) || v5 > v9) && (*(_BYTE *)(a1 + 104) & 4) == 0 )
    v6 = RmpPolicyComputeDesiredEmptyState(a1, a2, 1LL);
  return *(_DWORD *)(a2 + 1412) & 0x27 | v6;
}
