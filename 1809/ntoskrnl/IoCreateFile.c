/*
 * XREFs of IoCreateFile @ 0x14060B8B0
 * Callers:
 *     NtCreateMailslotFile @ 0x140586350 (NtCreateMailslotFile.c)
 *     NtCreateNamedPipeFile @ 0x1406BAA80 (NtCreateNamedPipeFile.c)
 *     PopCreateHiberFile @ 0x140747900 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408AED3C (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x1409D3F70 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 */

NTSTATUS __stdcall IoCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options)
{
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-38h]

  LODWORD(NumberOfBytes) = EaLength;
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer,
           NumberOfBytes,
           CreateFileType,
           (__int64)InternalParameters,
           Options,
           0,
           0LL);
}
