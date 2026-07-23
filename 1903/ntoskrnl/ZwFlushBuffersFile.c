/*
 * XREFs of ZwFlushBuffersFile @ 0x1401C0A30
 * Callers:
 *     CmpDoFileFlush @ 0x140099A9C (CmpDoFileFlush.c)
 *     RtlBootStatusDisableFlushing @ 0x140181E14 (RtlBootStatusDisableFlushing.c)
 *     PopFlushVolumeWorker @ 0x14059D3C0 (PopFlushVolumeWorker.c)
 *     RtlpGetSetBootStatusData @ 0x140741C5C (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x14074A544 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x140829994 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x140831A08 (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
