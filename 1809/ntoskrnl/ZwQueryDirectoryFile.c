/*
 * XREFs of ZwQueryDirectoryFile @ 0x1401B8810
 * Callers:
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706088 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     AslPathWildcardFindNext @ 0x1408EAAE4 (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        PUNICODE_STRING FileName,
        BOOLEAN RestartScan)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
