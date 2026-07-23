/*
 * XREFs of ZwFsControlFile @ 0x1401C07F0
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEE10 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x140744DE0 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x140746FB0 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x1407477F4 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x14074A544 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14077E6DC (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x1408A0FA8 (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x1408EADA4 (SmKmStoreFileGetExtents.c)
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
