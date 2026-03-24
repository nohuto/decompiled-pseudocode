/*
 * XREFs of ExAcquireResourceSharedLite @ 0x140050860
 * Callers:
 *     SepAcquireOrderedReadLocks @ 0x1400135F0 (SepAcquireOrderedReadLocks.c)
 *     SepFilterCheck @ 0x140052760 (SepFilterCheck.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9470 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x1400AA8D8 (SepTrustLevelCheck.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1400DA1E4 (SeTokenGetNoChildProcessRestricted.c)
 *     MiLookupDataTableEntry @ 0x1400DA590 (MiLookupDataTableEntry.c)
 *     LdrpKrnGetDataTableEntry @ 0x1400F3850 (LdrpKrnGetDataTableEntry.c)
 *     IopCreateSecurityCheck @ 0x14013001C (IopCreateSecurityCheck.c)
 *     McGenControlCallbackV2 @ 0x140139E90 (McGenControlCallbackV2.c)
 *     MiDeleteBootRange @ 0x140181100 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140186740 (MmVerifyCallbackFunctionCheckFlags.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1401B704C (SeTokenGetRedirectionTrustPolicy.c)
 *     IoFillTriageDumpBuffer @ 0x14027F894 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x1402826A0 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x1402FFCC8 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1402FFFFC (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140300330 (SeSetSecurityAttributesTokenEx.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x14030054C (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     PnpGetDevicePropertyData @ 0x1405869C8 (PnpGetDevicePropertyData.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405902D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlEndOperation @ 0x140595CA4 (PiPnpRtlEndOperation.c)
 *     SeQuerySessionIdTokenEx @ 0x140596110 (SeQuerySessionIdTokenEx.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     PiDmEnumObjectsWithCallback @ 0x140596F5C (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405989C8 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1405998D8 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1405999E8 (PiPnpRtlGetCurrentOperation.c)
 *     PpDevNodeLockTree @ 0x14059BF10 (PpDevNodeLockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059D8F4 (PnpAcquireDependencyRelationsLock.c)
 *     IopMountVolume @ 0x1405A2E64 (IopMountVolume.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DD0AC (FsRtlAcquireFileForCcFlushEx.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     SeLockSubjectContext @ 0x1405E6300 (SeLockSubjectContext.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405FD228 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x1405FD81C (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x1405FE128 (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x1405FE1FC (PspLockRootJobShared.c)
 *     SepValidLabelSubjectContext @ 0x1406096D0 (SepValidLabelSubjectContext.c)
 *     SeQueryUserSidToken @ 0x1406102AC (SeQueryUserSidToken.c)
 *     PspInsertThread @ 0x140621450 (PspInsertThread.c)
 *     SeQuerySecurityAttributesToken @ 0x140625740 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140626040 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x14062A760 (NtQueryInformationToken.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     AlpcpExposeTokenAttribute @ 0x1406336E0 (AlpcpExposeTokenAttribute.c)
 *     SeQueryInformationToken @ 0x14063C350 (SeQueryInformationToken.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     CmpDeleteKeyObject @ 0x14063F500 (CmpDeleteKeyObject.c)
 *     CmpLockRegistry @ 0x140645100 (CmpLockRegistry.c)
 *     CmQueryValueKey @ 0x140645190 (CmQueryValueKey.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140649030 (EtwpGetSidExtendedHeaderItem.c)
 *     SepDuplicateToken @ 0x140649480 (SepDuplicateToken.c)
 *     NtDuplicateToken @ 0x14064A010 (NtDuplicateToken.c)
 *     SepFilterToken @ 0x140657CCC (SepFilterToken.c)
 *     IopGetSetSecurityObject @ 0x1406990D0 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140699538 (IopSetDeviceSecurityDescriptor.c)
 *     SeQuerySessionIdToken @ 0x14069E460 (SeQuerySessionIdToken.c)
 *     SepValidOwnerSubjectContext @ 0x1406A52CC (SepValidOwnerSubjectContext.c)
 *     WmipGetSMBiosTableData @ 0x1406A7DBC (WmipGetSMBiosTableData.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406B8000 (ExpGetSystemFirmwareTableInformation.c)
 *     SeIsTokenAssignableToProcess @ 0x1406B90F8 (SeIsTokenAssignableToProcess.c)
 *     PspValidateJobAffinityState @ 0x1406C2054 (PspValidateJobAffinityState.c)
 *     SeQueryServerSiloToken @ 0x1406C5500 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x1406C81C8 (PspSetProcessPriorityClass.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F14 (PiProcessNewDeviceNode.c)
 *     PiUpdateDevicePanel @ 0x1406E9A1C (PiUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x1406EAB18 (PipProcessStartPhase3.c)
 *     IopReleaseDeviceResources @ 0x1406ED684 (IopReleaseDeviceResources.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F20 (PiPnpRtlObjectEventWorker.c)
 *     PiGetRelatedDevice @ 0x1406F882C (PiGetRelatedDevice.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FB2EC (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1406FBBF8 (PiQueryResourceRequirements.c)
 *     PiCreateDeviceInstanceKey @ 0x1406FD2D8 (PiCreateDeviceInstanceKey.c)
 *     PipGenerateContainerID @ 0x140700960 (PipGenerateContainerID.c)
 *     IopInvalidateVolumesForDevice @ 0x140704F4C (IopInvalidateVolumesForDevice.c)
 *     NtMapCMFModule @ 0x1407067A0 (NtMapCMFModule.c)
 *     PipMakeGloballyUniqueId @ 0x14070BEF0 (PipMakeGloballyUniqueId.c)
 *     MmEnumerateSystemImages @ 0x140726B6C (MmEnumerateSystemImages.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14072E09C (IopWriteAllocatedResourcesToRegistry.c)
 *     IoCreateDriver @ 0x14073A090 (IoCreateDriver.c)
 *     SepGetLogonSessionAccountInfo @ 0x14074DCBC (SepGetLogonSessionAccountInfo.c)
 *     MmIsDriverVerifyingByAddress @ 0x14075C160 (MmIsDriverVerifyingByAddress.c)
 *     PnpDriverLoadingFailed @ 0x1407630B0 (PnpDriverLoadingFailed.c)
 *     FsRtlCopyRead @ 0x140813E50 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408140D0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140814880 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140814AE0 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x14081A014 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x140823000 (PnpShutdownDevices.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14082862C (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140828D2C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x14082951C (PiDmGetObjectCount.c)
 *     MmGetSectionRange @ 0x14084EDA8 (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x1408887BC (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x140889054 (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x140899660 (RtlPcToFilePath.c)
 *     SepIdAssignableAsGroup @ 0x1408A0348 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x1408A1CFC (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x1408A38EC (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1408A3A00 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x1408A3AB8 (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x1408B27C4 (WmipFindSMBiosStructure.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140905D10 (PnpGetDeviceInstancePropertyData.c)
 *     VfDriverEnableVerifier @ 0x140927E78 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140928018 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x140050960 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x140165B60 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140166364 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  PERESOURCE v2; // rbx
  __int16 v4; // ax
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *CurrentThread; // rdx
  void *OwnerEntryForLegacyShim; // rsi
  BOOLEAN v9; // bl

  v2 = Resource;
  LOBYTE(Resource) = (Wait == 0) + 1;
  if ( (v2->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v2, 0LL, 0LL);
  v4 = v2->Flag & 1;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > (unsigned __int8)Resource )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, (unsigned __int8)Resource, 0LL);
    if ( CurrentIrql >= 2u )
    {
      LODWORD(Resource) = KeGetPcr()->Prcb.DpcRequestSummary;
      if ( ((unsigned int)Resource & 0x10001) != 0 )
        KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    }
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( !v4 )
    return ExpAcquireResourceSharedLite(v2, Wait);
  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(Resource);
  v9 = ExAcquireFastResourceShared((ULONG_PTR)v2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v9 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v9;
}
