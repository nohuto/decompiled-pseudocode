/*
 * XREFs of PspUnlockJob @ 0x140613420
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405B347C (PspSetJobIoRateControl.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14061251C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspGetNextChildJob @ 0x140612A88 (PspGetNextChildJob.c)
 *     PspChargeJobWakeCounter @ 0x140612B50 (PspChargeJobWakeCounter.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612D20 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x140612F24 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140613050 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 *     PspRemoveProcessFromJobChain @ 0x140614EA4 (PspRemoveProcessFromJobChain.c)
 *     PspLockRootJobFromProcess @ 0x1406151A8 (PspLockRootJobFromProcess.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406172E4 (PspQueryJobHierarchyProcessIdList.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406173EC (PspAllocateAndQueryNotificationChannel.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14068736C (PspEvaluateAndNotifyEmptyJob.c)
 *     PspSendProcessNotificationToJobChain @ 0x140687430 (PspSendProcessNotificationToJobChain.c)
 *     PspAssignProcessToJob @ 0x14068917C (PspAssignProcessToJob.c)
 *     PspGetNextJobProcess @ 0x14068A0A0 (PspGetNextJobProcess.c)
 *     PspJobNotificationWorker @ 0x1406B3190 (PspJobNotificationWorker.c)
 *     PspJobClose @ 0x1406E2430 (PspJobClose.c)
 *     PspNotificationPacketCallback @ 0x1406E2640 (PspNotificationPacketCallback.c)
 *     PsInsertPermanentSiloContextEx @ 0x14077ED58 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1408C49B0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x1408C4AA4 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x1408C4C40 (PspCreateSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1408C766C (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x1408C7818 (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x1408C7F2C (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
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
