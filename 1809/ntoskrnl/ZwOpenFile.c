/*
 * XREFs of ZwOpenFile @ 0x1401B87F0
 * Callers:
 *     KsepShimDbChanged @ 0x140178F7C (KsepShimDbChanged.c)
 *     DbgkPostModuleMessage @ 0x14026D8C4 (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x1403273F0 (BiLogFileOwnerProcess.c)
 *     KsepShimDbMapToMemory @ 0x1405A2050 (KsepShimDbMapToMemory.c)
 *     IoGetDeviceObjectPointer @ 0x140661E90 (IoGetDeviceObjectPointer.c)
 *     ExpGetGlobalLocaleSection @ 0x14067A570 (ExpGetGlobalLocaleSection.c)
 *     PiLookupInDDB @ 0x14067EE0C (PiLookupInDDB.c)
 *     MiCreateSectionForDriver @ 0x1406822A0 (MiCreateSectionForDriver.c)
 *     SiGetDiskPartitionInformation @ 0x1406AECA4 (SiGetDiskPartitionInformation.c)
 *     NtGetNlsSectionPtr @ 0x1406C4DE0 (NtGetNlsSectionPtr.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406C5C44 (EtwpUpdateFileInfoDriverRegistration.c)
 *     PopValidateHiberFileSize @ 0x1406DFE34 (PopValidateHiberFileSize.c)
 *     SiGetDriveLayoutInformation @ 0x140704224 (SiGetDriveLayoutInformation.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706068 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiGetNtPartitionPath @ 0x140711D44 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x1407143BC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140714680 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x14071488C (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140714A18 (BiIsVolumePartitionInformationRetained.c)
 *     RtlLockBootStatusData @ 0x140718C80 (RtlLockBootStatusData.c)
 *     PspLocateSystemDll @ 0x14075613C (PspLocateSystemDll.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1407F67DC (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x14080E48C (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x1408115A8 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x14081A218 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x14081B6BC (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x14081BCD0 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x14082552C (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x1408257B0 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1408275F0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14083CCC8 (IopFileUtilClearAttributes.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083E374 (PiDrvDbQuerySystemPathWin32.c)
 *     MiOpenHotPatchFile @ 0x1408568EC (MiOpenHotPatchFile.c)
 *     ExpGetDriveGeometry @ 0x1408D0C60 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1408D0E7C (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1408D2E78 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x1408D8BE8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408D94A0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1408DDA2C (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x1408E9560 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x1408E9604 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408EB7F0 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x1408F192C (BiGetPhysicalDriveName.c)
 *     SiGetDeviceNumberInformation @ 0x1408F4F1C (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1408F5048 (SiIssueSynchronousIoctl.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 *     IopMarkBootPartition @ 0x1409D6100 (IopMarkBootPartition.c)
 *     IopFileUtilRename @ 0x1409DAC58 (IopFileUtilRename.c)
 *     IopApplySystemPartitionProt @ 0x1409F4F40 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x1409F51A0 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x1409F9328 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1409F9480 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1409F9D4C (RamdiskStart.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
