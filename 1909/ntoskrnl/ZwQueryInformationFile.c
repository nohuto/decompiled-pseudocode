/*
 * XREFs of ZwQueryInformationFile @ 0x1401C0E70
 * Callers:
 *     KsepShimDbChanged @ 0x140182E4C (KsepShimDbChanged.c)
 *     DbgkCaptureLiveKernelDump @ 0x1402817C8 (DbgkCaptureLiveKernelDump.c)
 *     RtlFileMapMapView @ 0x140345380 (RtlFileMapMapView.c)
 *     BiLogFileOwnerProcess @ 0x14034868C (BiLogFileOwnerProcess.c)
 *     IopFileUtilClearAttributes @ 0x1405B4BBC (IopFileUtilClearAttributes.c)
 *     CmpInitHiveFromFile @ 0x140639858 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 *     CmpGetFileSize @ 0x14068FC4C (CmpGetFileSize.c)
 *     EtwpUpdateFileHeader @ 0x1406AE298 (EtwpUpdateFileHeader.c)
 *     CmpCmdHiveClose @ 0x1406B9CA8 (CmpCmdHiveClose.c)
 *     AslFileMappingCreate @ 0x14070C4A4 (AslFileMappingCreate.c)
 *     PopValidateHiberFileSize @ 0x14072B67C (PopValidateHiberFileSize.c)
 *     PopValidateExistingHiberFile @ 0x14075B844 (PopValidateExistingHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x140781794 (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x140859C74 (IopLiveDumpValidateDumpFileHandle.c)
 *     PfpQueryFileExtentsRequest @ 0x1408A07E8 (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x1408A7F2C (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1408E9EAC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EAD40 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x140915BF8 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x1409F93E0 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
