/*
 * XREFs of ZwQueryInformationFile @ 0x1401B8390
 * Callers:
 *     RtlFileMapMapView @ 0x140178C38 (RtlFileMapMapView.c)
 *     KsepShimDbChanged @ 0x140178F5C (KsepShimDbChanged.c)
 *     CmpAdjustFileCFSafety @ 0x1401B3254 (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x14026DE6C (DbgkCaptureLiveKernelDump.c)
 *     BiLogFileOwnerProcess @ 0x1403272F0 (BiLogFileOwnerProcess.c)
 *     CmpGetFileSize @ 0x1405A6250 (CmpGetFileSize.c)
 *     CmpCmdHiveClose @ 0x1405AFA08 (CmpCmdHiveClose.c)
 *     CmpInitHiveFromFile @ 0x1405B3D68 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     AslFileMappingCreate @ 0x14067E49C (AslFileMappingCreate.c)
 *     EtwpUpdateFileHeader @ 0x140699E3C (EtwpUpdateFileHeader.c)
 *     PopValidateHiberFileSize @ 0x1406DFE54 (PopValidateHiberFileSize.c)
 *     PopCreateHiberFile @ 0x140746730 (PopCreateHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x140759974 (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x140820510 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x14083CCE8 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x140864748 (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x14086BDF0 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1408AD670 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AE470 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x1408D8EF4 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x1409BD7E0 (EmInitSystem.c)
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
  return KiServiceInternal(FileHandle, IoStatusBlock, FileInformation);
}
