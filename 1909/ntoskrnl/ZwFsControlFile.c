/*
 * XREFs of ZwFsControlFile @ 0x1401C1370
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEB70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x140746CE0 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x140748EB0 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x1407496F4 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x14075A430 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407810FC (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x1408A07E8 (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x1408EA6AC (SmKmStoreFileGetExtents.c)
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
