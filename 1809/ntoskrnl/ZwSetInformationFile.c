/*
 * XREFs of ZwSetInformationFile @ 0x1401B8670
 * Callers:
 *     CmpCmdHiveClose @ 0x1405AFA08 (CmpCmdHiveClose.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     EtwpCreateLogFile @ 0x140699AFC (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x140699E1C (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069A3FC (EtwpFinalizeHeader.c)
 *     CmpDoFileSetSizeEx @ 0x1406B8940 (CmpDoFileSetSizeEx.c)
 *     EtwpRealtimeSaveState @ 0x1406D0004 (EtwpRealtimeSaveState.c)
 *     PopResizeHiberFile @ 0x1406DFCE8 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x140746710 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x14074BFB8 (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x14075D600 (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpFlushBackupHive @ 0x1407F4050 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407F4734 (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1407F67DC (CmpOpenFileWithExtremePrejudice.c)
 *     CmpCmdRenameHive @ 0x1407FAFA0 (CmpCmdRenameHive.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1408275F0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14083CCC8 (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x1408AD650 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1408ADD58 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1408CA4DC (EtwpSavePersistedLogger.c)
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
