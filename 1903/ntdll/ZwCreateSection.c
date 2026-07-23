/*
 * XREFs of ZwCreateSection @ 0x18009D020
 * Callers:
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 *     sub_18004B7B4 @ 0x18004B7B4 (sub_18004B7B4.c)
 *     sub_1800599C4 @ 0x1800599C4 (sub_1800599C4.c)
 *     sub_18005A624 @ 0x18005A624 (sub_18005A624.c)
 *     RtlCreateQueryDebugBuffer @ 0x18005AD00 (RtlCreateQueryDebugBuffer.c)
 *     sub_18006773C @ 0x18006773C (sub_18006773C.c)
 *     sub_1800795E8 @ 0x1800795E8 (sub_1800795E8.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089690 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     sub_1800DC8F0 @ 0x1800DC8F0 (sub_1800DC8F0.c)
 *     RtlComputeImportTableHash @ 0x1800DF5C0 (RtlComputeImportTableHash.c)
 *     sub_1800E2674 @ 0x1800E2674 (sub_1800E2674.c)
 *     sub_1800F7234 @ 0x1800F7234 (sub_1800F7234.c)
 *     sub_1801028F0 @ 0x1801028F0 (sub_1801028F0.c)
 *     sub_180104440 @ 0x180104440 (sub_180104440.c)
 *     sub_180111038 @ 0x180111038 (sub_180111038.c)
 *     sub_180111230 @ 0x180111230 (sub_180111230.c)
 *     sub_180111530 @ 0x180111530 (sub_180111530.c)
 *     sub_1801118C0 @ 0x1801118C0 (sub_1801118C0.c)
 *     sub_180111DA4 @ 0x180111DA4 (sub_180111DA4.c)
 *     sub_180112808 @ 0x180112808 (sub_180112808.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  NTSTATUS result; // eax

  result = 74;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
