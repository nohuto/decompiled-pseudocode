/*
 * XREFs of ZwOpenFile @ 0x1401B8950
 * Callers:
 *     KsepShimDbChanged @ 0x14017907C (KsepShimDbChanged.c)
 *     DbgkPostModuleMessage @ 0x14026DAB4 (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x1403275E0 (BiLogFileOwnerProcess.c)
 *     KsepShimDbMapToMemory @ 0x1405A3050 (KsepShimDbMapToMemory.c)
 *     IoGetDeviceObjectPointer @ 0x140663050 (IoGetDeviceObjectPointer.c)
 *     ExpGetGlobalLocaleSection @ 0x14067B730 (ExpGetGlobalLocaleSection.c)
 *     PiLookupInDDB @ 0x14067FFCC (PiLookupInDDB.c)
 *     MiCreateSectionForDriver @ 0x140683460 (MiCreateSectionForDriver.c)
 *     SiGetDiskPartitionInformation @ 0x1406AFF44 (SiGetDiskPartitionInformation.c)
 *     NtGetNlsSectionPtr @ 0x1406C6080 (NtGetNlsSectionPtr.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406C6EE4 (EtwpUpdateFileInfoDriverRegistration.c)
 *     PopValidateHiberFileSize @ 0x1406E10D4 (PopValidateHiberFileSize.c)
 *     SiGetDriveLayoutInformation @ 0x1407054C4 (SiGetDriveLayoutInformation.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140707308 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiGetNtPartitionPath @ 0x140712FE4 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x14071565C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140715920 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x140715B2C (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140715CB8 (BiIsVolumePartitionInformationRetained.c)
 *     RtlLockBootStatusData @ 0x140719F20 (RtlLockBootStatusData.c)
 *     PspLocateSystemDll @ 0x14075732C (PspLocateSystemDll.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1407F79DC (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x14080F68C (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x1408127A8 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x14081B418 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x14081C8BC (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x14081CED0 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x14082672C (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x1408269B0 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1408287F0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14083DF28 (IopFileUtilClearAttributes.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083F5D4 (PiDrvDbQuerySystemPathWin32.c)
 *     MiOpenHotPatchFile @ 0x140857B4C (MiOpenHotPatchFile.c)
 *     ExpGetDriveGeometry @ 0x1408D1F20 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1408D213C (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1408D4138 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x1408D9EA8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1408DECEC (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x1408EA820 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x1408EA8C4 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408ECAB0 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x1408F2BEC (BiGetPhysicalDriveName.c)
 *     SiGetDeviceNumberInformation @ 0x1408F61DC (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1408F6308 (SiIssueSynchronousIoctl.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     IopMarkBootPartition @ 0x1409D7100 (IopMarkBootPartition.c)
 *     IopFileUtilRename @ 0x1409DBC58 (IopFileUtilRename.c)
 *     IopApplySystemPartitionProt @ 0x1409F5F40 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x1409F61A0 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x1409FA328 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1409FA480 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1409FAD4C (RamdiskStart.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(FileHandle);
}
