/*
 * XREFs of ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180039404
 * Callers:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001ADF0 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180026B20 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180039380 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003AF30 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006E064 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x1800715C0 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180071734 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180071A40 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180071AD8 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPolicyComputeDesiredEmptyState(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v8; // edx
  int v9; // ecx

  v3 = *(_DWORD *)(a2 + 1244);
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 1464);
  v6 = *(_DWORD *)(a1 + 104);
  if ( (v3 & 0x10) == 0 && (v5 & 0x200) == 0 )
  {
    v4 = 2 * (v6 & 1);
    if ( (v5 & 0x100) == 0 )
      v4 |= 2 * (v6 & 2);
    if ( a3 > 0 )
    {
      v8 = v4 | 2;
      v9 = v6 & 4;
      if ( v9 )
        v8 = v4;
      v4 = v8;
      if ( a3 > 1 && !v9 )
        v4 = v8 | 0x20;
    }
  }
  return v3 & 0x27 | (unsigned int)v4;
}
