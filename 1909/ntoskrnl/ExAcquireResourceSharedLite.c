/*
 * XREFs of ExAcquireResourceSharedLite @ 0x14003C470
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x14000C4A8 (SepTrustLevelCheck.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x140085FA4 (SeTokenGetNoChildProcessRestricted.c)
 *     SepAcquireOrderedReadLocks @ 0x140087038 (SepAcquireOrderedReadLocks.c)
 *     SepFilterCheck @ 0x1400A96D0 (SepFilterCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x1400DF574 (LdrpKrnGetDataTableEntry.c)
 *     MiLookupDataTableEntry @ 0x1400FB388 (MiLookupDataTableEntry.c)
 *     IopCreateSecurityCheck @ 0x140117380 (IopCreateSecurityCheck.c)
 *     McGenControlCallbackV2 @ 0x14013C2B0 (McGenControlCallbackV2.c)
 *     MiAcquireResourceSharedLite @ 0x140147F2C (MiAcquireResourceSharedLite.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14018A350 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiDeleteBootRange @ 0x14018B138 (MiDeleteBootRange.c)
 *     IoFillTriageDumpBuffer @ 0x140294774 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x140297870 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x14031D968 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x14031DC80 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x14031E20C (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B6594 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     SeQuerySessionIdTokenEx @ 0x1405BC070 (SeQuerySessionIdTokenEx.c)
 *     PiDmEnumObjectsWithCallback @ 0x1405BD510 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405BEF20 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1405BF750 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1405BF860 (PiPnpRtlGetCurrentOperation.c)
 *     NtDuplicateToken @ 0x1405D7FA0 (NtDuplicateToken.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 *     AlpcpExposeTokenAttribute @ 0x1405E0490 (AlpcpExposeTokenAttribute.c)
 *     PspInsertThread @ 0x1405E9524 (PspInsertThread.c)
 *     NtQueryInformationToken @ 0x1405ED700 (NtQueryInformationToken.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 *     SeLockSubjectContext @ 0x1405F6E00 (SeLockSubjectContext.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14061251C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x140612B50 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x140613488 (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x14061355C (PspLockRootJobShared.c)
 *     SeQuerySecurityAttributesToken @ 0x14061A780 (SeQuerySecurityAttributesToken.c)
 *     SeIsTokenAssignableToProcess @ 0x14061E550 (SeIsTokenAssignableToProcess.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     IopGetSetSecurityObject @ 0x140623F40 (IopGetSetSecurityObject.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140624A44 (FsRtlAcquireFileForCcFlushEx.c)
 *     PnpGetDevicePropertyData @ 0x140626FA8 (PnpGetDevicePropertyData.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 *     SeQueryUserSidToken @ 0x140656D1C (SeQueryUserSidToken.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140658230 (EtwpGetSidExtendedHeaderItem.c)
 *     NtQuerySecurityAttributesToken @ 0x140665E60 (NtQuerySecurityAttributesToken.c)
 *     PiGetRelatedDevice @ 0x14066FCAC (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406700E0 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 *     IopMountVolume @ 0x1406A0254 (IopMountVolume.c)
 *     WmipGetSMBiosTableData @ 0x1406A4AF8 (WmipGetSMBiosTableData.c)
 *     SeQuerySessionIdToken @ 0x1406C4340 (SeQuerySessionIdToken.c)
 *     SepValidOwnerSubjectContext @ 0x1406CC7FC (SepValidOwnerSubjectContext.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406DADE4 (ExpGetSystemFirmwareTableInformation.c)
 *     SepValidLabelSubjectContext @ 0x1406DB094 (SepValidLabelSubjectContext.c)
 *     SeQueryServerSiloToken @ 0x1406DF270 (SeQueryServerSiloToken.c)
 *     SepGetLogonSessionAccountInfo @ 0x1406E2134 (SepGetLogonSessionAccountInfo.c)
 *     PspValidateJobAffinityState @ 0x1406E4620 (PspValidateJobAffinityState.c)
 *     PspSetProcessPriorityClass @ 0x1406E6B9C (PspSetProcessPriorityClass.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1406FC078 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x1407012C0 (PiUpdateDevicePanel.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PiCreateDeviceInstanceKey @ 0x14071B30C (PiCreateDeviceInstanceKey.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14071B784 (IopSetDeviceSecurityDescriptor.c)
 *     PipGenerateContainerID @ 0x14071D8E8 (PipGenerateContainerID.c)
 *     PiQueryAndAllocateBootResources @ 0x140723E28 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140724720 (PiQueryResourceRequirements.c)
 *     IopInvalidateVolumesForDevice @ 0x14072DF28 (IopInvalidateVolumesForDevice.c)
 *     IopReleaseDeviceResources @ 0x140732A70 (IopReleaseDeviceResources.c)
 *     PipMakeGloballyUniqueId @ 0x1407398BC (PipMakeGloballyUniqueId.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14075290C (IopWriteAllocatedResourcesToRegistry.c)
 *     IoCreateDriver @ 0x140755600 (IoCreateDriver.c)
 *     MmIsDriverVerifyingByAddress @ 0x140785010 (MmIsDriverVerifyingByAddress.c)
 *     PnpDriverLoadingFailed @ 0x14078B434 (PnpDriverLoadingFailed.c)
 *     FsRtlCopyRead @ 0x14084CFA0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14084D230 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14084DA00 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14084DC60 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140853614 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x14085CB4C (PnpShutdownDevices.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140862214 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140862A0C (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x1408632EC (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PiDmGetObjectCount @ 0x14086336C (PiDmGetObjectCount.c)
 *     MmGetSectionRange @ 0x14088A6BC (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x1408C601C (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x1408C6858 (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x1408D78F0 (RtlPcToFilePath.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1408DA020 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x1408DE3D8 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x1408DFF14 (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x1408E1B2C (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1408E1C40 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x1408E1CF8 (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x1408EF5AC (WmipFindSMBiosStructure.c)
 *     NtMapCMFModule @ 0x140916960 (NtMapCMFModule.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140943DB0 (PnpGetDeviceInstancePropertyData.c)
 *     VfDriverEnableVerifier @ 0x140966398 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140966538 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14003C570 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14016BE30 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14016C1B8 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
