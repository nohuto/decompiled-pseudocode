/*
 * XREFs of ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180036CD8
 * Callers:
 *     ?RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x1800120A4 (-RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800367F0 (-RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006148C (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180062870 (-RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180063E7C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180064CD8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800654E0 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180065678 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180036D50 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z3@Z @ 0x180037818 (-RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEA.c)
 */

void __fastcall RmpPolicyPopulateActivityHostMetrics(
        struct _RM_PARTITION *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int8 (*a5)(struct _RM_ACTIVITY_HOST *, void *),
        void *a6)
{
  if ( (a4 & *(_WORD *)(a3 + 44)) != a4 )
  {
    if ( !*(_WORD *)(a3 + 44) )
      RmpPolicyGenerateHostListForPopulate(a1, (struct _RM_POLICY_WORK_BUFFER *)a3, a5, a6);
    if ( *(_DWORD *)(a3 + 36) )
      RmpActivityHostPopulateMetrics(a3, a4, a2);
  }
}
