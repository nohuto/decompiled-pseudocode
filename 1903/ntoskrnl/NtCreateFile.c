/*
 * XREFs of NtCreateFile @ 0x140617110
 * Callers:
 *     PfSnIsVolumeMounted @ 0x14062687C (PfSnIsVolumeMounted.c)
 *     PfpVolumeOpenAndVerify @ 0x1406A9A58 (PfpVolumeOpenAndVerify.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1408D4410 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     IopCreateFile @ 0x1406171A0 (IopCreateFile.c)
 */

NTSTATUS __stdcall NtCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
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
           CreateDisposition,
           CreateOptions,
           EaBuffer,
           NumberOfBytes,
           0,
           0LL,
           0,
           32,
           0LL);
}
