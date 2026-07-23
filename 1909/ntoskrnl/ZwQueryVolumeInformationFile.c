/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1401C1570
 * Callers:
 *     CmpGetVolumeClusterSize @ 0x140690C18 (CmpGetVolumeClusterSize.c)
 *     EtwpFinalizeHeader @ 0x1406AD96C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406AE298 (EtwpUpdateFileHeader.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1406E91BC (CmpGetVolumeLogFileSizeCap.c)
 *     PopValidateHiberFileSize @ 0x14072B67C (PopValidateHiberFileSize.c)
 *     PfpQueryFileExtentsRequest @ 0x1408A07E8 (PfpQueryFileExtentsRequest.c)
 *     SmKmIsVolumeIoPossible @ 0x1408E94D8 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1408E9EAC (SmKmStoreFileCreate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
