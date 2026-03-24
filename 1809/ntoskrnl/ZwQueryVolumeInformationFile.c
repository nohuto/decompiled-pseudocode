/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1401B8AB0
 * Callers:
 *     CmpGetVolumeClusterSize @ 0x1405A4094 (CmpGetVolumeClusterSize.c)
 *     EtwpUpdateFileHeader @ 0x140699E1C (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069A3FC (EtwpFinalizeHeader.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1406C9A84 (CmpGetVolumeLogFileSizeCap.c)
 *     PopValidateHiberFileSize @ 0x1406DFE34 (PopValidateHiberFileSize.c)
 *     PfpQueryFileExtentsRequest @ 0x140864728 (PfpQueryFileExtentsRequest.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ACC9C (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1408AD650 (SmKmStoreFileCreate.c)
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
