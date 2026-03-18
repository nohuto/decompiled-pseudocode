/*
 * XREFs of ZwFlushBuffersFile @ 0x1401B8AD0
 * Callers:
 *     CmpDoFileFlush @ 0x14012DE7C (CmpDoFileFlush.c)
 *     RtlBootStatusDisableFlushing @ 0x1401785CC (RtlBootStatusDisableFlushing.c)
 *     PopFlushVolumeWorker @ 0x14056D9E0 (PopFlushVolumeWorker.c)
 *     RtlpGetSetBootStatusData @ 0x140718934 (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x140746730 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x1407EF15C (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407F4754 (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock, v2);
}
