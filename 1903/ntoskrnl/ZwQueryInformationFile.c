/*
 * XREFs of ZwQueryInformationFile @ 0x1401C02F0
 * Callers:
 *     KsepShimDbChanged @ 0x14018289C (KsepShimDbChanged.c)
 *     DbgkCaptureLiveKernelDump @ 0x140281A68 (DbgkCaptureLiveKernelDump.c)
 *     RtlFileMapMapView @ 0x140345920 (RtlFileMapMapView.c)
 *     BiLogFileOwnerProcess @ 0x140348C2C (BiLogFileOwnerProcess.c)
 *     IopFileUtilClearAttributes @ 0x1405B47DC (IopFileUtilClearAttributes.c)
 *     CmpInitHiveFromFile @ 0x1406365F8 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x14063E098 (CmpCmdHiveClose.c)
 *     CmpGetFileSize @ 0x140660D44 (CmpGetFileSize.c)
 *     EtwpUpdateFileHeader @ 0x1406B8B08 (EtwpUpdateFileHeader.c)
 *     AslFileMappingCreate @ 0x14070A6C4 (AslFileMappingCreate.c)
 *     PopValidateHiberFileSize @ 0x14072703C (PopValidateHiberFileSize.c)
 *     PopValidateExistingHiberFile @ 0x14074A868 (PopValidateExistingHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x14077ED74 (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14085A574 (IopLiveDumpValidateDumpFileHandle.c)
 *     PfpQueryFileExtentsRequest @ 0x1408A0FA8 (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x1408A86CC (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1408EA5A4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EB438 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x140916198 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x1409F94D0 (EmInitSystem.c)
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
