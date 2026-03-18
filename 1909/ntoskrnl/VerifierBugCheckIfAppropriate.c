/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x14096E604
 * Callers:
 *     VfFailDeviceNode @ 0x140181DF0 (VfFailDeviceNode.c)
 *     VfFailDriver @ 0x140327150 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x140327180 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x140327D0C (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140327F00 (MdlInvariantPreProcessing1.c)
 *     VerifierFreeTrackedPool @ 0x140328400 (VerifierFreeTrackedPool.c)
 *     VfReportIssueWithOptions @ 0x140328558 (VfReportIssueWithOptions.c)
 *     IovCompleteRequest @ 0x140963134 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x140963370 (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x140963420 (IovInitializeTimer.c)
 *     MmCheckMdlPages @ 0x140963F18 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140964018 (MmCheckMapIoSpace.c)
 *     VfUtilCheckKernelAddress @ 0x140964534 (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409648D8 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x140966F90 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x140967260 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1409672C0 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x140967490 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x1409675F4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409676CC (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x14096771C (VfIoCompletionCheckState.c)
 *     VfAllocateCommonBufferEx @ 0x140968680 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140968800 (VfAllocateCommonBufferWithBounds.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x14096F128 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x140970E50 (VerifierKeReleaseQueuedSpinLock.c)
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409723E0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140972520 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x1409728A8 (ViFreeTrackedPool.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140973560 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140973968 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140973AD0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140973DB4 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140973DE0 (VfRemLockReportBadReleaseTag.c)
 *     VfTargetEtwUnregister @ 0x1409741CC (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409746F4 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140974770 (ViTargetRemovingCheckEtwWmi.c)
 *     ViErrorFinishReport @ 0x140975830 (ViErrorFinishReport.c)
 *     VfCheckUserHandle @ 0x140977664 (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409778E0 (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140977A54 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x140977FC0 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x140978240 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409784A0 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x140978560 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x140978620 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409788D0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x140978960 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x140978A50 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x140979310 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140979548 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14097968C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x140979770 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409797E0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x140979A10 (ViKeWaitSanityChecks.c)
 *     VfPoolCheckForLeaks @ 0x14097D44C (VfPoolCheckForLeaks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x14097DA20 (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x14097E24C (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x14097E490 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14097E5E0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14097E700 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x14097E808 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14097E8A4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14097E9CC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14097F100 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14097F4E0 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14097F76C (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x14097F8B4 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x14097F97C (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140981DE0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x140981F9C (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x140981FDC (ViExCheckAPCsDisabled.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1409836D0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409837C0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409838E0 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140983A00 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140983B60 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140983D00 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140983DF0 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140983F10 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x140984290 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140984400 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409844E0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1409846C0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1409847C0 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140984900 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140984A40 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x140984AD0 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140984DB8 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x140984EB0 (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x140985370 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x140985490 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x140985620 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x1409876A0 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x14098A014 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x14098A0CC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x14098A164 (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x14098A60C (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x14098A778 (ExFreePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierBugCheckIfAppropriate(
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 BugCheckParameter4)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned int v11; // ebx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0;
  if ( (MmVerifierData & 0x400000) != 0 )
  {
    if ( CurrentIrql > 2u )
      return result;
    if ( ViXdvTipUtils )
    {
      if ( (VfFlightOptions & 1) == 0 || !(*(unsigned int (__fastcall **)(_QWORD))(ViXdvTipUtils + 16))(BugCheckCode) )
        return (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, ULONG_PTR, ULONG_PTR, __int64))(ViXdvTipUtils + 8))(
                 BugCheckCode,
                 BugCheckParameter1,
                 BugCheckParameter2,
                 BugCheckParameter3,
                 BugCheckParameter4);
    }
    else
    {
      result = VfFlightOptions & 1;
      if ( !(_BYTE)result )
        return result;
    }
  }
  v12 = ViVerifierBugcheckAttributes;
  while ( *(_DWORD *)v12 != BugCheckCode || *((_DWORD *)v12 + 1) != BugCheckParameter1 )
  {
    ++v11;
    v12 = (__int64 *)((char *)v12 + 12);
    if ( v11 >= 0xD )
      goto LABEL_13;
  }
  if ( VfVerifyMode >= *((_DWORD *)v12 + 2) )
LABEL_13:
    KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  v13 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
  result = BugCheckParameter4;
  *((_QWORD *)&ViBugcheckLog + v13 + 4) = BugCheckParameter4;
  *((_DWORD *)&ViBugcheckLog + 2 * v13) = BugCheckCode;
  *((_QWORD *)&ViBugcheckLog + v13 + 1) = BugCheckParameter1;
  *((_QWORD *)&ViBugcheckLog + v13 + 2) = BugCheckParameter2;
  *((_QWORD *)&ViBugcheckLog + v13 + 3) = BugCheckParameter3;
  return result;
}
