/*
 * XREFs of PspUnlockJob @ 0x1405FF0C0
 * Callers:
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x140585F0C (PspSetJobIoRateControl.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405FE228 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspGetNextChildJob @ 0x1405FE760 (PspGetNextChildJob.c)
 *     PspChargeJobWakeCounter @ 0x1405FE81C (PspChargeJobWakeCounter.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FE9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x1405FEBF8 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1405FED20 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 *     PspLockRootJobFromProcess @ 0x140601738 (PspLockRootJobFromProcess.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspSendProcessNotificationToJobChain @ 0x14060494C (PspSendProcessNotificationToJobChain.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140604DE8 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 *     PspJobClose @ 0x1406075F0 (PspJobClose.c)
 *     PspGetNextJobProcess @ 0x14068E660 (PspGetNextJobProcess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406B89B0 (PspQueryJobHierarchyProcessIdList.c)
 *     PspJobNotificationWorker @ 0x1406BA850 (PspJobNotificationWorker.c)
 *     PspNotificationPacketCallback @ 0x1406C3A60 (PspNotificationPacketCallback.c)
 *     PsInsertPermanentSiloContextEx @ 0x140731BF8 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140887F70 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x140888064 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140888200 (PspCreateSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x14088B0BC (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x14088B25C (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x14088B94C (PspSetNetRateControl.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery(v3);
  }
}
