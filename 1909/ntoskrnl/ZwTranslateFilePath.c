/*
 * XREFs of ZwTranslateFilePath @ 0x1401C4410
 * Callers:
 *     ExpSetBootEntry @ 0x14090E998 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14090F178 (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x140931EE8 (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x140932818 (SiBootEntryGetNtFilePath.c)
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
