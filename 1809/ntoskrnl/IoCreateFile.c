/*
 * XREFs of IoCreateFile @ 0x14060A8B0
 * Callers:
 *     NtCreateMailslotFile @ 0x140585350 (NtCreateMailslotFile.c)
 *     NtCreateNamedPipeFile @ 0x1406B9800 (NtCreateNamedPipeFile.c)
 *     PopCreateHiberFile @ 0x140746730 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408ADAFC (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x1409D2F70 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x14060BAC0 (IopCreateFile.c)
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
