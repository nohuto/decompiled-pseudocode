/*
 * XREFs of ZwFsControlFile @ 0x1401B88B0
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8A70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x140718BA0 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x14071E578 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14071EC34 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140746710 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140758F6C (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x140864728 (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x1408ADDE8 (SmKmStoreFileGetExtents.c)
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
