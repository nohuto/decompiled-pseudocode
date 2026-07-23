/*
 * XREFs of ExAcquireResourceSharedLite @ 0x140050860
 * Callers:
 *     SepAcquireOrderedReadLocks @ 0x1400135F0 (SepAcquireOrderedReadLocks.c)
 *     SepFilterCheck @ 0x140052760 (SepFilterCheck.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x1400AA818 (SepTrustLevelCheck.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1400DA264 (SeTokenGetNoChildProcessRestricted.c)
 *     MiLookupDataTableEntry @ 0x1400DA610 (MiLookupDataTableEntry.c)
 *     LdrpKrnGetDataTableEntry @ 0x1400F38D0 (LdrpKrnGetDataTableEntry.c)
 *     IopCreateSecurityCheck @ 0x1401300EC (IopCreateSecurityCheck.c)
 *     McGenControlCallbackV2 @ 0x140139F90 (McGenControlCallbackV2.c)
 *     MiDeleteBootRange @ 0x140181240 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140186880 (MmVerifyCallbackFunctionCheckFlags.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1401B71B4 (SeTokenGetRedirectionTrustPolicy.c)
 *     IoFillTriageDumpBuffer @ 0x14027FA84 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x140282890 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x1402FFEB8 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1403001EC (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140300520 (SeSetSecurityAttributesTokenEx.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x14030073C (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     PnpGetDevicePropertyData @ 0x1405879C8 (PnpGetDevicePropertyData.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405912D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     SeQuerySessionIdTokenEx @ 0x140597110 (SeQuerySessionIdTokenEx.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     PiDmEnumObjectsWithCallback @ 0x140597F5C (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14059A8D8 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x14059A9E8 (PiPnpRtlGetCurrentOperation.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059E8F4 (PnpAcquireDependencyRelationsLock.c)
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DE0AC (FsRtlAcquireFileForCcFlushEx.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     SeLockSubjectContext @ 0x1405E7300 (SeLockSubjectContext.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405FE228 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x1405FE81C (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x1405FF128 (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x1405FF1FC (PspLockRootJobShared.c)
 *     SepValidLabelSubjectContext @ 0x14060A6D0 (SepValidLabelSubjectContext.c)
 *     SeQueryUserSidToken @ 0x1406112AC (SeQueryUserSidToken.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     SeQuerySecurityAttributesToken @ 0x140626760 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140627060 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     AlpcpExposeTokenAttribute @ 0x140634700 (AlpcpExposeTokenAttribute.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14064A1F0 (EtwpGetSidExtendedHeaderItem.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     NtDuplicateToken @ 0x14064B1D0 (NtDuplicateToken.c)
 *     SepFilterToken @ 0x140658E8C (SepFilterToken.c)
 *     IopGetSetSecurityObject @ 0x14069A290 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14069A6F8 (IopSetDeviceSecurityDescriptor.c)
 *     SeQuerySessionIdToken @ 0x14069F720 (SeQuerySessionIdToken.c)
 *     SepValidOwnerSubjectContext @ 0x1406A656C (SepValidOwnerSubjectContext.c)
 *     WmipGetSMBiosTableData @ 0x1406A905C (WmipGetSMBiosTableData.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406B92A0 (ExpGetSystemFirmwareTableInformation.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA398 (SeIsTokenAssignableToProcess.c)
 *     PspValidateJobAffinityState @ 0x1406C32F4 (PspValidateJobAffinityState.c)
 *     SeQueryServerSiloToken @ 0x1406C67A0 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x1406C9468 (PspSetProcessPriorityClass.c)
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 *     PiUpdateDevicePanel @ 0x1406EACBC (PiUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x1406EBDB8 (PipProcessStartPhase3.c)
 *     IopReleaseDeviceResources @ 0x1406EE924 (IopReleaseDeviceResources.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F31C0 (PiPnpRtlObjectEventWorker.c)
 *     PiGetRelatedDevice @ 0x1406F9ACC (PiGetRelatedDevice.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FC58C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1406FCE98 (PiQueryResourceRequirements.c)
 *     PiCreateDeviceInstanceKey @ 0x1406FE578 (PiCreateDeviceInstanceKey.c)
 *     PipGenerateContainerID @ 0x140701C00 (PipGenerateContainerID.c)
 *     IopInvalidateVolumesForDevice @ 0x1407061EC (IopInvalidateVolumesForDevice.c)
 *     NtMapCMFModule @ 0x140707A40 (NtMapCMFModule.c)
 *     PipMakeGloballyUniqueId @ 0x14070D190 (PipMakeGloballyUniqueId.c)
 *     MmEnumerateSystemImages @ 0x140727E0C (MmEnumerateSystemImages.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14072F28C (IopWriteAllocatedResourcesToRegistry.c)
 *     IoCreateDriver @ 0x14073B280 (IoCreateDriver.c)
 *     SepGetLogonSessionAccountInfo @ 0x14074EEAC (SepGetLogonSessionAccountInfo.c)
 *     MmIsDriverVerifyingByAddress @ 0x14075D350 (MmIsDriverVerifyingByAddress.c)
 *     PnpDriverLoadingFailed @ 0x1407642A0 (PnpDriverLoadingFailed.c)
 *     FsRtlCopyRead @ 0x140815050 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408152D0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140815A80 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140815CE0 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x14081B214 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x140824200 (PnpShutdownDevices.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14082982C (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140829F2C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x14082A71C (PiDmGetObjectCount.c)
 *     MmGetSectionRange @ 0x140850008 (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x140889A1C (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x14088A2B4 (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x14089A8C0 (RtlPcToFilePath.c)
 *     SepIdAssignableAsGroup @ 0x1408A15A8 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x1408A2F5C (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x1408A4B4C (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1408A4C60 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x1408A4D18 (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x1408B3A24 (WmipFindSMBiosStructure.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140906FD0 (PnpGetDeviceInstancePropertyData.c)
 *     VfDriverEnableVerifier @ 0x140928E78 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140929018 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x140050960 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x140165C60 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140166464 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
