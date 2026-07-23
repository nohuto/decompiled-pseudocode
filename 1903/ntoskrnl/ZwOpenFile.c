/*
 * XREFs of ZwOpenFile @ 0x1401C0730
 * Callers:
 *     KsepShimDbChanged @ 0x14018289C (KsepShimDbChanged.c)
 *     DbgkPostModuleMessage @ 0x140281394 (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x140348C2C (BiLogFileOwnerProcess.c)
 *     SiOpenDevice @ 0x1405B2034 (SiOpenDevice.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1405B4700 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1405B47DC (IopFileUtilClearAttributes.c)
 *     NtGetNlsSectionPtr @ 0x14061E910 (NtGetNlsSectionPtr.c)
 *     IoGetDeviceObjectPointer @ 0x140661AF0 (IoGetDeviceObjectPointer.c)
 *     ExpGetGlobalLocaleSection @ 0x14067AE28 (ExpGetGlobalLocaleSection.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1406981A4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406E7818 (EtwpUpdateFileInfoDriverRegistration.c)
 *     KsepShimDbMapToMemory @ 0x140708904 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x140709E9C (PiLookupInDDB.c)
 *     MiCreateSectionForDriver @ 0x14070F9B0 (MiCreateSectionForDriver.c)
 *     PopValidateHiberFileSize @ 0x14072703C (PopValidateHiberFileSize.c)
 *     RtlLockBootStatusData @ 0x140738E00 (RtlLockBootStatusData.c)
 *     BiGetNtPartitionPath @ 0x14073BE94 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x14073E7CC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14073EBF8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x14073ED2C (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x14073EED0 (BiIsVolumePartitionInformationRetained.c)
 *     PspLocateSystemDll @ 0x14075B53C (PspLocateSystemDll.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14082F528 (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x140847CE4 (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x14084AFC8 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x14085411C (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x1408556CC (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140855D20 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x14085F9E0 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x14085FC94 (PiOpenDirectoryWithRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140879864 (PiDrvDbQuerySystemPathWin32.c)
 *     MiOpenHotPatchFile @ 0x140890210 (MiOpenHotPatchFile.c)
 *     PopDeleteHiberFile @ 0x1408A7EC4 (PopDeleteHiberFile.c)
 *     ExpGetDriveGeometry @ 0x14090E478 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x14090E6B4 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409106F8 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x140915E7C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409167B0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14091B754 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x140926250 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140926308 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140928538 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x14092F5BC (BiGetPhysicalDriveName.c)
 *     IopMarkBootPartition @ 0x1409F5560 (IopMarkBootPartition.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     IopFileUtilRename @ 0x140A1D790 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A22A74 (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x140A3A4B4 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A3A730 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x140A3EEAC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A3F040 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A3F940 (RamdiskStart.c)
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
