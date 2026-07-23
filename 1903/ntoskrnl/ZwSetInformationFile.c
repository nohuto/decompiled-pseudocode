/*
 * XREFs of ZwSetInformationFile @ 0x1401C05B0
 * Callers:
 *     PpLastGoodDeleteFilesCallback @ 0x1405B4700 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1405B47DC (IopFileUtilClearAttributes.c)
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x14063E098 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x140662D3C (CmpDoFileSetSizeEx.c)
 *     EtwpFinalizeHeader @ 0x1406B827C (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1406B87D4 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1406B8B08 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveState @ 0x1406B9D6C (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1406B9F4C (EtwpRealtimeZeroTruncateLogfile.c)
 *     PopResizeHiberFile @ 0x140726EE8 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x14074A544 (PopCreateHiberFile.c)
 *     PopValidateExistingHiberFile @ 0x14074A868 (PopValidateExistingHiberFile.c)
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14082F528 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpFlushBackupHive @ 0x14083126C (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x140831A08 (CmpWriteOffsetArrayToFile.c)
 *     CmpCmdRenameHive @ 0x140834360 (CmpCmdRenameHive.c)
 *     SmKmStoreFileCreate @ 0x1408EA5A4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1408EAD04 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x140907A28 (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x140A1D790 (IopFileUtilRename.c)
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
