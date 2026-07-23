/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x140930D84
 * Callers:
 *     VfFailDeviceNode @ 0x140177F10 (VfFailDeviceNode.c)
 *     VerifierFreeTrackedPool @ 0x1402BA60C (VerifierFreeTrackedPool.c)
 *     VfFailDriver @ 0x140309D10 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x140309D40 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x14030A83C (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14030AA30 (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     IovCompleteRequest @ 0x140924FD4 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x1409251EC (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x1409252A0 (IovInitializeTimer.c)
 *     MmCheckMdlPages @ 0x140925D88 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140925E88 (MmCheckMapIoSpace.c)
 *     VeAllocatePoolWithTagPriority @ 0x140925F50 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409263D0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140926500 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x140926838 (ViFreeTrackedPool.c)
 *     VfUtilCheckKernelAddress @ 0x1409270A4 (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140927400 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x140929920 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x140929BE0 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x140929C40 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x140929E10 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x140929F74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x14092A04C (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x14092A09C (VfIoCompletionCheckState.c)
 *     VfAllocateCommonBufferEx @ 0x14092B000 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x14092B0E0 (VfAllocateCommonBufferWithBounds.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409318A0 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409335D0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140934F40 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x1409353B8 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140935520 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x1409357F8 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140935824 (VfRemLockReportBadReleaseTag.c)
 *     VfTargetEtwUnregister @ 0x140935BF4 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409360E8 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140936164 (ViTargetRemovingCheckEtwWmi.c)
 *     ViErrorFinishReport @ 0x140937178 (ViErrorFinishReport.c)
 *     VfPoolCheckForLeaks @ 0x140938F38 (VfPoolCheckForLeaks.c)
 *     VfCheckUserHandle @ 0x14093A01C (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x14093A2B0 (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x14093A424 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x14093A990 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x14093AC10 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x14093AE70 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x14093AF30 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x14093AFF0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x14093B2A0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x14093B330 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x14093B420 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x14093BCE0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x14093BF18 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14093C048 (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x14093C12C (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x14093C19C (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x14093C3CC (ViKeWaitSanityChecks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x14093F18C (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x14093F9B8 (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x14093FC00 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14093FD50 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14093FE70 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x14093FF78 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14094000C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14094012C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x140940860 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140940C40 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x140940ECC (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x140941008 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x1409410D0 (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140943500 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1409436BC (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x1409436FC (ViExCheckAPCsDisabled.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140944D00 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140944DF0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140944F10 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140945030 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140945190 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140945330 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140945420 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140945540 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x1409458C0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140945A30 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140945B10 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140945CF0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140945DF0 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140945F30 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140946070 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x140946100 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1409463E8 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x1409464E0 (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x1409469A0 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x140946AC0 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x140946C50 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x140948CC0 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x14094B634 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x14094B6EC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x14094BC10 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x14094BD7C (ExFreePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
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
