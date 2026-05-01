/*
 * XREFs of memcpy_0 @ 0x180049292
 * Callers:
 *     CrmStateMonitorGPUUsageStart @ 0x1800034F0 (CrmStateMonitorGPUUsageStart.c)
 *     CrmStateMonitorStart @ 0x180003A80 (CrmStateMonitorStart.c)
 *     CrmStateMonitorStateSet @ 0x1800040C8 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x1800045F0 (CrmStateMonitorLogDataGet.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000739C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     CrmRegistrationStart @ 0x18000820C (CrmRegistrationStart.c)
 *     ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x18000A36C (-RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x1800152B4 (RmpWnfPublishMessageToClientStateName.c)
 *     PsmHostStateNotification2 @ 0x180015420 (PsmHostStateNotification2.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E330 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001FDB0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18002DE70 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     CempGetTokenHostInfo @ 0x180033F40 (CempGetTokenHostInfo.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800341DC (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x1800343FC (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x180034720 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     PsmMemoryLimitNotification2 @ 0x180038FB0 (PsmMemoryLimitNotification2.c)
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x1800403B8 (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 *     ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x180044AF0 (-RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z.c)
 *     CrmStateMonitorWNFStart @ 0x180045834 (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180045C34 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180046460 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorWNFCallback @ 0x180046A60 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x180046AE4 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorNetworkStart @ 0x180046C50 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180046DB8 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180046EF0 (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180046FA4 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x180047010 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x180047074 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180047120 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x180047184 (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x1800471E8 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x18007E3DC (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorTestStart @ 0x18007E760 (CrmStateMonitorTestStart.c)
 *     ReportHangInternal2 @ 0x18007FEAC (ReportHangInternal2.c)
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x180080628 (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
