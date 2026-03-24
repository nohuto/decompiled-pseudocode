/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x14092FD84
 * Callers:
 *     VfFailDeviceNode @ 0x140177E10 (VfFailDeviceNode.c)
 *     VerifierFreeTrackedPool @ 0x1402BA41C (VerifierFreeTrackedPool.c)
 *     VfFailDriver @ 0x140309B20 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x140309B50 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x14030A64C (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14030A840 (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x14030AE18 (VfReportIssueWithOptions.c)
 *     IovCompleteRequest @ 0x140923FD4 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x1409241EC (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x1409242A0 (IovInitializeTimer.c)
 *     MmCheckMdlPages @ 0x140924D88 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140924E88 (MmCheckMapIoSpace.c)
 *     VeAllocatePoolWithTagPriority @ 0x140924F50 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409253D0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140925500 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x140925838 (ViFreeTrackedPool.c)
 *     VfUtilCheckKernelAddress @ 0x1409260A4 (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140926400 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x140928920 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x140928BE0 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x140928C40 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x140928E10 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x140928F74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x14092904C (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x14092909C (VfIoCompletionCheckState.c)
 *     VfAllocateCommonBufferEx @ 0x14092A000 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x14092A0E0 (VfAllocateCommonBufferWithBounds.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409308A0 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409325D0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140933F40 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x1409343B8 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140934520 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x1409347F8 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140934824 (VfRemLockReportBadReleaseTag.c)
 *     VfTargetEtwUnregister @ 0x140934BF4 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409350E8 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140935164 (ViTargetRemovingCheckEtwWmi.c)
 *     ViErrorFinishReport @ 0x140936178 (ViErrorFinishReport.c)
 *     VfPoolCheckForLeaks @ 0x140937F38 (VfPoolCheckForLeaks.c)
 *     VfCheckUserHandle @ 0x14093901C (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409392B0 (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140939424 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x140939990 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x140939C10 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x140939E70 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x140939F30 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x140939FF0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x14093A2A0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x14093A330 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x14093A420 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x14093ACE0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x14093AF18 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14093B048 (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x14093B12C (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x14093B19C (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x14093B3CC (ViKeWaitSanityChecks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x14093E18C (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x14093E9B8 (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x14093EC00 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14093ED50 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14093EE70 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x14093EF78 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14093F00C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14093F12C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14093F860 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14093FC40 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14093FECC (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x140940008 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x1409400D0 (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140942500 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1409426BC (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x1409426FC (ViExCheckAPCsDisabled.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140943D00 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140943DF0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140943F10 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140944030 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140944190 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140944330 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140944420 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140944540 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x1409448C0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140944A30 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140944B10 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140944CF0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140944DF0 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140944F30 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140945070 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x140945100 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1409453E8 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x1409454E0 (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x1409459A0 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x140945AC0 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x140945C50 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x140947CC0 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x14094A634 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x14094A6EC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x14094A784 (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x14094AC10 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x14094AD7C (ExFreePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
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
