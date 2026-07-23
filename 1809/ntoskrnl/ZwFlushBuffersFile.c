/*
 * XREFs of ZwFlushBuffersFile @ 0x1401B8C50
 * Callers:
 *     CmpDoFileFlush @ 0x14012DF6C (CmpDoFileFlush.c)
 *     RtlBootStatusDisableFlushing @ 0x1401786EC (RtlBootStatusDisableFlushing.c)
 *     PopFlushVolumeWorker @ 0x14056E9E0 (PopFlushVolumeWorker.c)
 *     RtlpGetSetBootStatusData @ 0x140719BB4 (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x140747900 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x1407F033C (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407F5934 (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
