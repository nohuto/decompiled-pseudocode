/*
 * XREFs of ZwFlushBuffersFile @ 0x1401C15B0
 * Callers:
 *     CmpDoFileFlush @ 0x1400EDAF8 (CmpDoFileFlush.c)
 *     RtlBootStatusDisableFlushing @ 0x140182504 (RtlBootStatusDisableFlushing.c)
 *     PopFlushVolumeWorker @ 0x14059CC40 (PopFlushVolumeWorker.c)
 *     RtlpGetSetBootStatusData @ 0x140743B5C (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x14075A430 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x140829094 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x14082D578 (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
