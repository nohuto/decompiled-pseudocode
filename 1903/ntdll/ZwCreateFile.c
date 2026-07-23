/*
 * XREFs of ZwCreateFile @ 0x18009D180
 * Callers:
 *     sub_180005268 @ 0x180005268 (sub_180005268.c)
 *     sub_18005A624 @ 0x18005A624 (sub_18005A624.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086610 (RtlCreateSystemVolumeInformationFolder.c)
 *     sub_18008C038 @ 0x18008C038 (sub_18008C038.c)
 *     sub_1800E2674 @ 0x1800E2674 (sub_1800E2674.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EAAE0 (RtlCreateBootStatusDataFile.c)
 *     sub_1801140B8 @ 0x1801140B8 (sub_1801140B8.c)
 *     sub_1801141DC @ 0x1801141DC (sub_1801141DC.c)
 *     sub_180114328 @ 0x180114328 (sub_180114328.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateFile(
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
  NTSTATUS result; // eax

  result = 85;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
