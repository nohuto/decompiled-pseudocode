/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1401B8A90
 * Callers:
 *     CmpGetVolumeClusterSize @ 0x1405A4094 (CmpGetVolumeClusterSize.c)
 *     EtwpUpdateFileHeader @ 0x140699E3C (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069A41C (EtwpFinalizeHeader.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1406C9AA4 (CmpGetVolumeLogFileSizeCap.c)
 *     PopValidateHiberFileSize @ 0x1406DFE54 (PopValidateHiberFileSize.c)
 *     PfpQueryFileExtentsRequest @ 0x140864748 (PfpQueryFileExtentsRequest.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ACCBC (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1408AD670 (SmKmStoreFileCreate.c)
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
  return KiServiceInternal(FileHandle, IoStatusBlock, FsInformation);
}
