/*
 * XREFs of ZwQueryInformationFile @ 0x1401B83B0
 * Callers:
 *     RtlFileMapMapView @ 0x140178C58 (RtlFileMapMapView.c)
 *     KsepShimDbChanged @ 0x140178F7C (KsepShimDbChanged.c)
 *     CmpAdjustFileCFSafety @ 0x1401B3274 (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x14026DF6C (DbgkCaptureLiveKernelDump.c)
 *     BiLogFileOwnerProcess @ 0x1403273F0 (BiLogFileOwnerProcess.c)
 *     CmpGetFileSize @ 0x1405A6250 (CmpGetFileSize.c)
 *     CmpCmdHiveClose @ 0x1405AFA08 (CmpCmdHiveClose.c)
 *     CmpInitHiveFromFile @ 0x1405B3D68 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     AslFileMappingCreate @ 0x14067E47C (AslFileMappingCreate.c)
 *     EtwpUpdateFileHeader @ 0x140699E1C (EtwpUpdateFileHeader.c)
 *     PopValidateHiberFileSize @ 0x1406DFE34 (PopValidateHiberFileSize.c)
 *     PopCreateHiberFile @ 0x140746710 (PopCreateHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x140759954 (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x1408204F0 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x14083CCC8 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x140864728 (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x14086BDD0 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1408AD650 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AE450 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x1408D8ED4 (CMFGetFileSizeEx.c)
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
