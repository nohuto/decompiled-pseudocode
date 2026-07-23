/*
 * XREFs of ZwMapViewOfSection @ 0x18009CBE0
 * Callers:
 *     sub_18002A0B0 @ 0x18002A0B0 (sub_18002A0B0.c)
 *     sub_18004B7B4 @ 0x18004B7B4 (sub_18004B7B4.c)
 *     sub_1800599C4 @ 0x1800599C4 (sub_1800599C4.c)
 *     sub_18005A624 @ 0x18005A624 (sub_18005A624.c)
 *     RtlCreateQueryDebugBuffer @ 0x18005AD00 (RtlCreateQueryDebugBuffer.c)
 *     sub_18006773C @ 0x18006773C (sub_18006773C.c)
 *     sub_1800757D8 @ 0x1800757D8 (sub_1800757D8.c)
 *     sub_1800795E8 @ 0x1800795E8 (sub_1800795E8.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089690 (LdrVerifyImageMatchesChecksumEx.c)
 *     sub_1800D559C @ 0x1800D559C (sub_1800D559C.c)
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     sub_1800DC8F0 @ 0x1800DC8F0 (sub_1800DC8F0.c)
 *     RtlComputeImportTableHash @ 0x1800DF5C0 (RtlComputeImportTableHash.c)
 *     sub_1800E2674 @ 0x1800E2674 (sub_1800E2674.c)
 *     sub_1800F02D0 @ 0x1800F02D0 (sub_1800F02D0.c)
 *     sub_1800F03F0 @ 0x1800F03F0 (sub_1800F03F0.c)
 *     sub_1800F0E40 @ 0x1800F0E40 (sub_1800F0E40.c)
 *     sub_1800F7234 @ 0x1800F7234 (sub_1800F7234.c)
 *     RtlHeapTrkInitialize @ 0x1800F76D0 (RtlHeapTrkInitialize.c)
 *     sub_1800F8260 @ 0x1800F8260 (sub_1800F8260.c)
 *     sub_1801028F0 @ 0x1801028F0 (sub_1801028F0.c)
 *     sub_180104440 @ 0x180104440 (sub_180104440.c)
 *     sub_180111038 @ 0x180111038 (sub_180111038.c)
 *     sub_180111230 @ 0x180111230 (sub_180111230.c)
 *     sub_180111530 @ 0x180111530 (sub_180111530.c)
 *     sub_1801118C0 @ 0x1801118C0 (sub_1801118C0.c)
 *     sub_180111DA4 @ 0x180111DA4 (sub_180111DA4.c)
 *     sub_180112808 @ 0x180112808 (sub_180112808.c)
 *     sub_180112EBC @ 0x180112EBC (sub_180112EBC.c)
 *     sub_180112FE8 @ 0x180112FE8 (sub_180112FE8.c)
 *     sub_180113168 @ 0x180113168 (sub_180113168.c)
 *     sub_1801132F0 @ 0x1801132F0 (sub_1801132F0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  NTSTATUS result; // eax

  result = 40;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
