/*
 * XREFs of ZwTranslateFilePath @ 0x1401BBA90
 * Callers:
 *     ExpSetBootEntry @ 0x1408D29CC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D318C (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x1408F5A48 (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x1408F63F0 (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        ULONG OutputFilePathLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InputFilePath);
}
