/*
 * XREFs of PspUnlockJob @ 0x140611910
 * Callers:
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405B30A0 (PspSetJobIoRateControl.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140610A0C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspGetNextChildJob @ 0x140610F78 (PspGetNextChildJob.c)
 *     PspChargeJobWakeCounter @ 0x140611040 (PspChargeJobWakeCounter.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140611210 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x140611414 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140611540 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 *     PspRemoveProcessFromJobChain @ 0x140613394 (PspRemoveProcessFromJobChain.c)
 *     PspLockRootJobFromProcess @ 0x140613698 (PspLockRootJobFromProcess.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406157D4 (PspQueryJobHierarchyProcessIdList.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406158DC (PspAllocateAndQueryNotificationChannel.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140693DFC (PspEvaluateAndNotifyEmptyJob.c)
 *     PspSendProcessNotificationToJobChain @ 0x140693EC0 (PspSendProcessNotificationToJobChain.c)
 *     PspAssignProcessToJob @ 0x140695C0C (PspAssignProcessToJob.c)
 *     PspGetNextJobProcess @ 0x140696B30 (PspGetNextJobProcess.c)
 *     PspJobNotificationWorker @ 0x1406B1110 (PspJobNotificationWorker.c)
 *     PspJobClose @ 0x1406E0DB0 (PspJobClose.c)
 *     PspNotificationPacketCallback @ 0x1406E0FC0 (PspNotificationPacketCallback.c)
 *     PsInsertPermanentSiloContextEx @ 0x14077C438 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1408C50E0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x1408C51D4 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x1408C5370 (PspCreateSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1408C7D8C (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x1408C7F38 (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x1408C864C (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
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
