/*
 * XREFs of ZwFsControlFile @ 0x1401B8A10
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8C60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x140719E40 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x14071F818 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14071FED4 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140747900 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14075A15C (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x140865988 (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x1408AF048 (SmKmStoreFileGetExtents.c)
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
  return KiServiceInternal(FileHandle);
}
