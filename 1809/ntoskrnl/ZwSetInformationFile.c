/*
 * XREFs of ZwSetInformationFile @ 0x1401B87D0
 * Callers:
 *     CmpCmdHiveClose @ 0x1405B0A08 (CmpCmdHiveClose.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     EtwpCreateLogFile @ 0x14069ACBC (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x14069AFDC (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069B5BC (EtwpFinalizeHeader.c)
 *     CmpDoFileSetSizeEx @ 0x1406B9BE0 (CmpDoFileSetSizeEx.c)
 *     EtwpRealtimeSaveState @ 0x1406D12A4 (EtwpRealtimeSaveState.c)
 *     PopResizeHiberFile @ 0x1406E0F88 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x140747900 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x14075E7F0 (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpFlushBackupHive @ 0x1407F5250 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407F5934 (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1407F79DC (CmpOpenFileWithExtremePrejudice.c)
 *     CmpCmdRenameHive @ 0x1407FC1A0 (CmpCmdRenameHive.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1408287F0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14083DF28 (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x1408AE8B0 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1408AEFB8 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1408CB79C (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x1409DBC58 (IopFileUtilRename.c)
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
  return KiServiceInternal(FileHandle);
}
