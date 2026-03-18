/*
 * XREFs of ZwTranslateFilePath @ 0x1401BB910
 * Callers:
 *     ExpSetBootEntry @ 0x1408D172C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D1EEC (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x1408F47A8 (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x1408F5150 (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        ULONG OutputFilePathLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InputFilePath, *(_QWORD *)&OutputType, OutputFilePath);
}
