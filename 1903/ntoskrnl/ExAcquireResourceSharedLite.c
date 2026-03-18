/*
 * XREFs of ExAcquireResourceSharedLite @ 0x14003C730
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B0B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x14000C418 (SepTrustLevelCheck.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x140085BA4 (SeTokenGetNoChildProcessRestricted.c)
 *     SepAcquireOrderedReadLocks @ 0x140086C18 (SepAcquireOrderedReadLocks.c)
 *     SepFilterCheck @ 0x1400C9850 (SepFilterCheck.c)
 *     MiLookupDataTableEntry @ 0x1400F78E8 (MiLookupDataTableEntry.c)
 *     IopCreateSecurityCheck @ 0x140115D10 (IopCreateSecurityCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x14011D270 (LdrpKrnGetDataTableEntry.c)
 *     McGenControlCallbackV2 @ 0x14013BC90 (McGenControlCallbackV2.c)
 *     MiAcquireResourceSharedLite @ 0x14014788C (MiAcquireResourceSharedLite.c)
 *     MiDeleteBootRange @ 0x14018A7A8 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14018F410 (MmVerifyCallbackFunctionCheckFlags.c)
 *     IoFillTriageDumpBuffer @ 0x140294A14 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x140297B10 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x14031DF18 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x14031E230 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x14031E7BC (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B61B4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     SeQuerySessionIdTokenEx @ 0x1405BBC90 (SeQuerySessionIdTokenEx.c)
 *     PiDmEnumObjectsWithCallback @ 0x1405BD130 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405BEA50 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1405BF280 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1405BF390 (PiPnpRtlGetCurrentOperation.c)
 *     NtDuplicateToken @ 0x1405D77E0 (NtDuplicateToken.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     RtlpNewSecurityObject @ 0x1405D9CE0 (RtlpNewSecurityObject.c)
 *     AlpcpExposeTokenAttribute @ 0x1405DFC60 (AlpcpExposeTokenAttribute.c)
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     NtQueryInformationToken @ 0x1405ECF30 (NtQueryInformationToken.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     SeLockSubjectContext @ 0x1405F5DB0 (SeLockSubjectContext.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140610A0C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x140611040 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x140611978 (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x140611A4C (PspLockRootJobShared.c)
 *     SeQuerySecurityAttributesToken @ 0x140618C70 (SeQuerySecurityAttributesToken.c)
 *     SeIsTokenAssignableToProcess @ 0x14061CA40 (SeIsTokenAssignableToProcess.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     PnpGetDevicePropertyData @ 0x1406230F8 (PnpGetDevicePropertyData.c)
 *     SeQueryUserSidToken @ 0x1406431CC (SeQueryUserSidToken.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1406446E0 (EtwpGetSidExtendedHeaderItem.c)
 *     NtQuerySecurityAttributesToken @ 0x140652D60 (NtQuerySecurityAttributesToken.c)
 *     SepValidLabelSubjectContext @ 0x140671EE0 (SepValidLabelSubjectContext.c)
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140687250 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopGetSetSecurityObject @ 0x14069E430 (IopGetSetSecurityObject.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069EF34 (FsRtlAcquireFileForCcFlushEx.c)
 *     PiGetRelatedDevice @ 0x1406A27CC (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     WmipGetSMBiosTableData @ 0x1406BFAF8 (WmipGetSMBiosTableData.c)
 *     SeQuerySessionIdToken @ 0x1406C5180 (SeQuerySessionIdToken.c)
 *     SepValidOwnerSubjectContext @ 0x1406CDA50 (SepValidOwnerSubjectContext.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406DA4E4 (ExpGetSystemFirmwareTableInformation.c)
 *     SeQueryServerSiloToken @ 0x1406DDE80 (SeQueryServerSiloToken.c)
 *     SepGetLogonSessionAccountInfo @ 0x1406E0A00 (SepGetLogonSessionAccountInfo.c)
 *     PspValidateJobAffinityState @ 0x1406E3170 (PspValidateJobAffinityState.c)
 *     PspSetProcessPriorityClass @ 0x1406E5D18 (PspSetProcessPriorityClass.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1406FA298 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x1406FF4E0 (PiUpdateDevicePanel.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PiCreateDeviceInstanceKey @ 0x14071951C (PiCreateDeviceInstanceKey.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140719994 (IopSetDeviceSecurityDescriptor.c)
 *     PipGenerateContainerID @ 0x14071BAF8 (PipGenerateContainerID.c)
 *     PiQueryAndAllocateBootResources @ 0x140721F88 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140722880 (PiQueryResourceRequirements.c)
 *     IopInvalidateVolumesForDevice @ 0x14072C088 (IopInvalidateVolumesForDevice.c)
 *     IopReleaseDeviceResources @ 0x140730810 (IopReleaseDeviceResources.c)
 *     PipMakeGloballyUniqueId @ 0x140737660 (PipMakeGloballyUniqueId.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140751E7C (IopWriteAllocatedResourcesToRegistry.c)
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 *     MmIsDriverVerifyingByAddress @ 0x140782D40 (MmIsDriverVerifyingByAddress.c)
 *     PnpDriverLoadingFailed @ 0x140788FD4 (PnpDriverLoadingFailed.c)
 *     FsRtlCopyRead @ 0x14084D8A0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14084DB30 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14084E300 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14084E560 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140853F14 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x14085D44C (PnpShutdownDevices.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140862B14 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14086330C (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x140863BEC (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PiDmGetObjectCount @ 0x140863C6C (PiDmGetObjectCount.c)
 *     MmGetSectionRange @ 0x14088AE9C (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x1408C673C (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x1408C6F78 (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x1408D7FF0 (RtlPcToFilePath.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1408DA720 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x1408DEAD8 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x1408E0614 (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x1408E222C (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1408E2340 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x1408E23F8 (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x1408EFC9C (WmipFindSMBiosStructure.c)
 *     NtMapCMFModule @ 0x140916F00 (NtMapCMFModule.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140944340 (PnpGetDeviceInstancePropertyData.c)
 *     VfDriverEnableVerifier @ 0x140966398 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140966538 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14016B740 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14016BAC8 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  PERESOURCE v2; // rbx
  __int16 v4; // ax
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // r8
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
