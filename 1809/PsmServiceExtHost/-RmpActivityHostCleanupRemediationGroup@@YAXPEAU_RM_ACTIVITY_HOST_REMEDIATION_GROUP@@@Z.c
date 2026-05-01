/*
 * XREFs of ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005B1E4
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180063E7C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180064CD8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800654E0 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180065678 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18005B9D0 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpActivityHostCleanupRemediationGroup(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **a1)
{
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v2; // rcx
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v3; // rbx

  v2 = *a1;
  if ( v2 != (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)a1 )
  {
    do
    {
      v3 = *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)v2;
      RmpActivityHostRemoveFromRemediationGroup((struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)((char *)v2 - 1376), 0);
      v2 = v3;
    }
    while ( v3 != (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)a1 );
  }
}
