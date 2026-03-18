/*
 * XREFs of ZwSetInformationFile @ 0x1401B8650
 * Callers:
 *     CmpCmdHiveClose @ 0x1405AFA08 (CmpCmdHiveClose.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     EtwpCreateLogFile @ 0x140699B1C (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x140699E3C (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069A41C (EtwpFinalizeHeader.c)
 *     CmpDoFileSetSizeEx @ 0x1406B8960 (CmpDoFileSetSizeEx.c)
 *     EtwpRealtimeSaveState @ 0x1406D0024 (EtwpRealtimeSaveState.c)
 *     PopResizeHiberFile @ 0x1406DFD08 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x140746730 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x14075D620 (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpFlushBackupHive @ 0x1407F4070 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407F4754 (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1407F67FC (CmpOpenFileWithExtremePrejudice.c)
 *     CmpCmdRenameHive @ 0x1407FAFC0 (CmpCmdRenameHive.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140827610 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14083CCE8 (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x1408AD670 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1408ADD78 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1408CA4FC (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x1409DAC58 (IopFileUtilRename.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationFile(
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
