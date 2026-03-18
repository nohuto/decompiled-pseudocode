/*
 * XREFs of IoCreateFile @ 0x140617880
 * Callers:
 *     NtCreateMailslotFile @ 0x1405B5340 (NtCreateMailslotFile.c)
 *     NtCreateNamedPipeFile @ 0x1406DBBB0 (NtCreateNamedPipeFile.c)
 *     PopCreateHiberFile @ 0x14075A430 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408EA35C (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x140A16DD0 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x140618CB0 (IopCreateFile.c)
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
