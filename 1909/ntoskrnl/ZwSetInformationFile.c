/*
 * XREFs of ZwSetInformationFile @ 0x1401C1130
 * Callers:
 *     PpLastGoodDeleteFilesCallback @ 0x1405B4AE0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1405B4BBC (IopFileUtilClearAttributes.c)
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 *     CmpDoFileSetSizeEx @ 0x14068C5C0 (CmpDoFileSetSizeEx.c)
 *     EtwpFinalizeHeader @ 0x1406AD96C (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1406ADF64 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1406AE298 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveState @ 0x1406AF45C (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1406AF504 (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpCmdHiveClose @ 0x1406B9CA8 (CmpCmdHiveClose.c)
 *     PopResizeHiberFile @ 0x14072B528 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x14075A430 (PopCreateHiberFile.c)
 *     PopValidateExistingHiberFile @ 0x14075B844 (PopValidateExistingHiberFile.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     CmpFlushBackupHive @ 0x14082CE80 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14082D578 (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14082F398 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpCmdRenameHive @ 0x1408339C0 (CmpCmdRenameHive.c)
 *     SmKmStoreFileCreate @ 0x1408E9EAC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1408EA60C (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x140907458 (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x140A1D96C (IopFileUtilRename.c)
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
