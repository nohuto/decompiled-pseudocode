/*
 * XREFs of ZwOpenFile @ 0x1401C12B0
 * Callers:
 *     KsepShimDbChanged @ 0x140182E4C (KsepShimDbChanged.c)
 *     DbgkPostModuleMessage @ 0x1402810F4 (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x14034868C (BiLogFileOwnerProcess.c)
 *     SiOpenDevice @ 0x1405B2410 (SiOpenDevice.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1405B4AE0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1405B4BBC (IopFileUtilClearAttributes.c)
 *     NtGetNlsSectionPtr @ 0x140620430 (NtGetNlsSectionPtr.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14068B714 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IoGetDeviceObjectPointer @ 0x1406907A0 (IoGetDeviceObjectPointer.c)
 *     ExpGetGlobalLocaleSection @ 0x1406D35B8 (ExpGetGlobalLocaleSection.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406E8918 (EtwpUpdateFileInfoDriverRegistration.c)
 *     KsepShimDbMapToMemory @ 0x14070A6E4 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x14070BC7C (PiLookupInDDB.c)
 *     MiCreateSectionForDriver @ 0x140711790 (MiCreateSectionForDriver.c)
 *     PopValidateHiberFileSize @ 0x14072B67C (PopValidateHiberFileSize.c)
 *     RtlLockBootStatusData @ 0x14073B060 (RtlLockBootStatusData.c)
 *     BiGetNtPartitionPath @ 0x14073DD94 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x1407406CC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140740AF8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x140740C2C (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140740DD0 (BiIsVolumePartitionInformationRetained.c)
 *     PspLocateSystemDll @ 0x14075FCC0 (PspLocateSystemDll.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14082F398 (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x1408473EC (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x14084A6C8 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x14085381C (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x140854DCC (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140855420 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x14085F0E0 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x14085F394 (PiOpenDirectoryWithRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140878F64 (PiDrvDbQuerySystemPathWin32.c)
 *     MiOpenHotPatchFile @ 0x14088FA30 (MiOpenHotPatchFile.c)
 *     PopDeleteHiberFile @ 0x1408A7724 (PopDeleteHiberFile.c)
 *     ExpGetDriveGeometry @ 0x14090DED8 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x14090E114 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x140910158 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x1409158DC (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140916210 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14091B1B4 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x140925CB0 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x140925D68 (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140927F98 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x14092F030 (BiGetPhysicalDriveName.c)
 *     IopMarkBootPartition @ 0x1409F5470 (IopMarkBootPartition.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     IopFileUtilRename @ 0x140A1D96C (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A22B54 (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x140A3A284 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A3A500 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x140A3EC7C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A3EE10 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A3F710 (RamdiskStart.c)
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
