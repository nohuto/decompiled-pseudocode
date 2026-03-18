/*
 * XREFs of IoCreateFile @ 0x140615D70
 * Callers:
 *     NtCreateMailslotFile @ 0x1405B4F60 (NtCreateMailslotFile.c)
 *     NtCreateNamedPipeFile @ 0x1406DB090 (NtCreateNamedPipeFile.c)
 *     PopCreateHiberFile @ 0x14074A544 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408EAA54 (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x140A16910 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x1406171A0 (IopCreateFile.c)
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
