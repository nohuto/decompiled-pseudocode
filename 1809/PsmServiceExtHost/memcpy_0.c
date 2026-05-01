/*
 * XREFs of memcpy_0 @ 0x180049A02
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180002C48 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x1800132F4 (-RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z.c)
 *     CempGetTokenHostInfo @ 0x1800134C0 (CempGetTokenHostInfo.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x180014374 (RmpWnfPublishMessageToClientStateName.c)
 *     PsmHostStateNotification2 @ 0x180015880 (PsmHostStateNotification2.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001BA50 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18001C590 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@8PEAPEAV12@@Z @ 0x18001C900 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001DCA0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18002AFF0 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     CrmStateMonitorStateSet @ 0x180032410 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x180032A34 (CrmStateMonitorLogDataGet.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180037A14 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180037C44 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     PsmMemoryLimitNotification2 @ 0x180037FC0 (PsmMemoryLimitNotification2.c)
 *     CrmRegistrationStart @ 0x18003BB4C (CrmRegistrationStart.c)
 *     CrmStateMonitorStart @ 0x180042CE8 (CrmStateMonitorStart.c)
 *     CrmStateMonitorWNFStart @ 0x180042FD8 (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180043090 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180043128 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x1800431C4 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x18004334C (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x1800433B0 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorNetworkStart @ 0x180043414 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x1800434BC (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180043520 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x180043584 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180043668 (CrmStateMonitorTimeSinceLogonStart.c)
 *     ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x180045318 (-RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z.c)
 *     CrmStateMonitorWNFCallback @ 0x1800476B0 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorCompositeTestStart @ 0x180070B8C (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorTestStart @ 0x180070E30 (CrmStateMonitorTestStart.c)
 *     ReportHangInternal2 @ 0x180073E7C (ReportHangInternal2.c)
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x18007461C (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
