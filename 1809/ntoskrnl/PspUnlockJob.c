/*
 * XREFs of PspUnlockJob @ 0x1405FE0C0
 * Callers:
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x140584F0C (PspSetJobIoRateControl.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405FD228 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspGetNextChildJob @ 0x1405FD760 (PspGetNextChildJob.c)
 *     PspChargeJobWakeCounter @ 0x1405FD81C (PspChargeJobWakeCounter.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FD9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x1405FDBF8 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1405FDD20 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     PspRemoveProcessFromJobChain @ 0x140600410 (PspRemoveProcessFromJobChain.c)
 *     PspLockRootJobFromProcess @ 0x140600738 (PspLockRootJobFromProcess.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspSendProcessNotificationToJobChain @ 0x14060394C (PspSendProcessNotificationToJobChain.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140603DE8 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspAssignProcessToJob @ 0x140605664 (PspAssignProcessToJob.c)
 *     PspJobClose @ 0x1406065F0 (PspJobClose.c)
 *     PspGetNextJobProcess @ 0x14068D4C0 (PspGetNextJobProcess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB24 (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406B7730 (PspQueryJobHierarchyProcessIdList.c)
 *     PspJobNotificationWorker @ 0x1406B95D0 (PspJobNotificationWorker.c)
 *     PspNotificationPacketCallback @ 0x1406C27E0 (PspNotificationPacketCallback.c)
 *     PsInsertPermanentSiloContextEx @ 0x140730A28 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140886D30 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x140886E24 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140886FC0 (PspCreateSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140889E7C (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x14088A01C (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x14088A70C (PspSetNetRateControl.c)
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
