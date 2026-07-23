/*
 * XREFs of ZwTranslateFilePath @ 0x1401C3890
 * Callers:
 *     ExpSetBootEntry @ 0x14090EF38 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14090F718 (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x140932474 (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x140932DA4 (SiBootEntryGetNtFilePath.c)
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
