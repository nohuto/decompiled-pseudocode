/*
 * XREFs of ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006125C
 * Callers:
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180039080 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800643AC (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x180064440 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x1800644D0 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180064644 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180064950 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x1800649E8 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180036C20 (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x1800385B4 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 */

bool __fastcall RmpPolicyActivityHostIsValidEmptyTarget(struct _RM_ACTIVITY_HOST *a1)
{
  int IsRunnable; // eax
  __int64 v2; // rcx
  __int64 v3; // r9
  char v4; // dl
  int v5; // eax
  unsigned __int8 v6; // r11

  IsRunnable = RmpActivityHostIsRunnable(a1, (*((_DWORD *)a1 + 297) >> 8) & 1);
  v4 = 0;
  if ( !IsRunnable )
  {
    v5 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v2 + 48) + 400LL, v3, 2);
    return (v6 & (unsigned __int8)v5 & 0x27) != v5;
  }
  return v4;
}
