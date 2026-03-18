/*
 * XREFs of ExAcquireResourceSharedLite @ 0x140050860
 * Callers:
 *     SepAcquireOrderedReadLocks @ 0x1400135F0 (SepAcquireOrderedReadLocks.c)
 *     SepFilterCheck @ 0x140052760 (SepFilterCheck.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9450 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x1400AA8B8 (SepTrustLevelCheck.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1400DA1C4 (SeTokenGetNoChildProcessRestricted.c)
 *     MiLookupDataTableEntry @ 0x1400DA570 (MiLookupDataTableEntry.c)
 *     LdrpKrnGetDataTableEntry @ 0x1400F3830 (LdrpKrnGetDataTableEntry.c)
 *     IopCreateSecurityCheck @ 0x14012FFFC (IopCreateSecurityCheck.c)
 *     McGenControlCallbackV2 @ 0x140139E70 (McGenControlCallbackV2.c)
 *     MiDeleteBootRange @ 0x1401810E0 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140186720 (MmVerifyCallbackFunctionCheckFlags.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1401B702C (SeTokenGetRedirectionTrustPolicy.c)
 *     IoFillTriageDumpBuffer @ 0x14027F794 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x1402825A0 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x1402FFBC8 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1402FFEFC (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140300230 (SeSetSecurityAttributesTokenEx.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x14030044C (SepGetProcUniqueLuidAndIndexFromToken.c)
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
 *     SeQueryInformationToken @ 0x14063C370 (SeQueryInformationToken.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     CmpDeleteKeyObject @ 0x14063F520 (CmpDeleteKeyObject.c)
 *     CmpLockRegistry @ 0x140645120 (CmpLockRegistry.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140649050 (EtwpGetSidExtendedHeaderItem.c)
 *     SepDuplicateToken @ 0x1406494A0 (SepDuplicateToken.c)
 *     NtDuplicateToken @ 0x14064A030 (NtDuplicateToken.c)
 *     SepFilterToken @ 0x140657CEC (SepFilterToken.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140699558 (IopSetDeviceSecurityDescriptor.c)
 *     SeQuerySessionIdToken @ 0x14069E480 (SeQuerySessionIdToken.c)
 *     SepValidOwnerSubjectContext @ 0x1406A52EC (SepValidOwnerSubjectContext.c)
 *     WmipGetSMBiosTableData @ 0x1406A7DDC (WmipGetSMBiosTableData.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406B8020 (ExpGetSystemFirmwareTableInformation.c)
 *     SeIsTokenAssignableToProcess @ 0x1406B9118 (SeIsTokenAssignableToProcess.c)
 *     PspValidateJobAffinityState @ 0x1406C2074 (PspValidateJobAffinityState.c)
 *     SeQueryServerSiloToken @ 0x1406C5520 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x1406C81E8 (PspSetProcessPriorityClass.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PiUpdateDevicePanel @ 0x1406E9A3C (PiUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x1406EAB38 (PipProcessStartPhase3.c)
 *     IopReleaseDeviceResources @ 0x1406ED6A4 (IopReleaseDeviceResources.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F40 (PiPnpRtlObjectEventWorker.c)
 *     PiGetRelatedDevice @ 0x1406F884C (PiGetRelatedDevice.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FB30C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1406FBC18 (PiQueryResourceRequirements.c)
 *     PiCreateDeviceInstanceKey @ 0x1406FD2F8 (PiCreateDeviceInstanceKey.c)
 *     PipGenerateContainerID @ 0x140700980 (PipGenerateContainerID.c)
 *     IopInvalidateVolumesForDevice @ 0x140704F6C (IopInvalidateVolumesForDevice.c)
 *     NtMapCMFModule @ 0x1407067C0 (NtMapCMFModule.c)
 *     PipMakeGloballyUniqueId @ 0x14070BF10 (PipMakeGloballyUniqueId.c)
 *     MmEnumerateSystemImages @ 0x140726B8C (MmEnumerateSystemImages.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14072E0BC (IopWriteAllocatedResourcesToRegistry.c)
 *     IoCreateDriver @ 0x14073A0B0 (IoCreateDriver.c)
 *     SepGetLogonSessionAccountInfo @ 0x14074DCDC (SepGetLogonSessionAccountInfo.c)
 *     MmIsDriverVerifyingByAddress @ 0x14075C180 (MmIsDriverVerifyingByAddress.c)
 *     PnpDriverLoadingFailed @ 0x1407630D0 (PnpDriverLoadingFailed.c)
 *     FsRtlCopyRead @ 0x140813E70 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408140F0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1408148A0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140814B00 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x14081A034 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x140823020 (PnpShutdownDevices.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14082864C (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140828D4C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x14082953C (PiDmGetObjectCount.c)
 *     MmGetSectionRange @ 0x14084EDC8 (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x1408887DC (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x140889074 (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x140899680 (RtlPcToFilePath.c)
 *     SepIdAssignableAsGroup @ 0x1408A0368 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x1408A1D1C (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x1408A390C (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1408A3A20 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x1408A3AD8 (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x1408B27E4 (WmipFindSMBiosStructure.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140905D30 (PnpGetDeviceInstancePropertyData.c)
 *     VfDriverEnableVerifier @ 0x140927E78 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140928018 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x140050960 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x140165B40 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140166344 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
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
