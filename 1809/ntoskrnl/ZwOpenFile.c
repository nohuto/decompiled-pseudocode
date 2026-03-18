/*
 * XREFs of ZwOpenFile @ 0x1401B87D0
 * Callers:
 *     KsepShimDbChanged @ 0x140178F5C (KsepShimDbChanged.c)
 *     DbgkPostModuleMessage @ 0x14026D7C4 (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x1403272F0 (BiLogFileOwnerProcess.c)
 *     KsepShimDbMapToMemory @ 0x1405A2050 (KsepShimDbMapToMemory.c)
 *     IoGetDeviceObjectPointer @ 0x140661EB0 (IoGetDeviceObjectPointer.c)
 *     ExpGetGlobalLocaleSection @ 0x14067A590 (ExpGetGlobalLocaleSection.c)
 *     PiLookupInDDB @ 0x14067EE2C (PiLookupInDDB.c)
 *     MiCreateSectionForDriver @ 0x1406822C0 (MiCreateSectionForDriver.c)
 *     SiGetDiskPartitionInformation @ 0x1406AECC4 (SiGetDiskPartitionInformation.c)
 *     NtGetNlsSectionPtr @ 0x1406C4E00 (NtGetNlsSectionPtr.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406C5C64 (EtwpUpdateFileInfoDriverRegistration.c)
 *     PopValidateHiberFileSize @ 0x1406DFE54 (PopValidateHiberFileSize.c)
 *     SiGetDriveLayoutInformation @ 0x140704244 (SiGetDriveLayoutInformation.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706088 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiGetNtPartitionPath @ 0x140711D64 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x1407143DC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1407146A0 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x1407148AC (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140714A38 (BiIsVolumePartitionInformationRetained.c)
 *     RtlLockBootStatusData @ 0x140718CA0 (RtlLockBootStatusData.c)
 *     PspLocateSystemDll @ 0x14075615C (PspLocateSystemDll.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1407F67FC (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x14080E4AC (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x1408115C8 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x14081A238 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x14081B6DC (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x14081BCF0 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x14082554C (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x1408257D0 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140827610 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14083CCE8 (IopFileUtilClearAttributes.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083E394 (PiDrvDbQuerySystemPathWin32.c)
 *     MiOpenHotPatchFile @ 0x14085690C (MiOpenHotPatchFile.c)
 *     ExpGetDriveGeometry @ 0x1408D0C80 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1408D0E9C (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1408D2E98 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x1408D8C08 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408D94C0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1408DDA4C (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x1408E9580 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x1408E9624 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408EB810 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x1408F194C (BiGetPhysicalDriveName.c)
 *     SiGetDeviceNumberInformation @ 0x1408F4F3C (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1408F5068 (SiIssueSynchronousIoctl.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 *     IopMarkBootPartition @ 0x1409D6100 (IopMarkBootPartition.c)
 *     IopFileUtilRename @ 0x1409DAC58 (IopFileUtilRename.c)
 *     IopApplySystemPartitionProt @ 0x1409F4F30 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x1409F5190 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x1409F9318 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1409F9470 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1409F9D3C (RamdiskStart.c)
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
