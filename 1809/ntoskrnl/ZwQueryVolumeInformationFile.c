/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1401B8C10
 * Callers:
 *     CmpGetVolumeClusterSize @ 0x1405A5094 (CmpGetVolumeClusterSize.c)
 *     EtwpUpdateFileHeader @ 0x14069AFDC (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069B5BC (EtwpFinalizeHeader.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1406CAD24 (CmpGetVolumeLogFileSizeCap.c)
 *     PopValidateHiberFileSize @ 0x1406E10D4 (PopValidateHiberFileSize.c)
 *     PfpQueryFileExtentsRequest @ 0x140865988 (PfpQueryFileExtentsRequest.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ADEFC (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1408AE8B0 (SmKmStoreFileCreate.c)
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
