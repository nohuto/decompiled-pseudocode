/*
 * XREFs of ZwFsControlFile @ 0x1401B8890
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8970 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x140718BC0 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x14071E598 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14071EC54 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140746730 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140758F8C (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x140864748 (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x1408ADE08 (SmKmStoreFileGetExtents.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
