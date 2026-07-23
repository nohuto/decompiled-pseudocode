/*
 * XREFs of ZwReadVirtualMemory @ 0x18009CEC0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800793D0 (RtlWow64GetSharedInfoProcess.c)
 *     sub_180079770 @ 0x180079770 (sub_180079770.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E6890 (RtlQueryCriticalSectionOwner.c)
 *     sub_1800F085C @ 0x1800F085C (sub_1800F085C.c)
 *     PssNtFreeRemoteSnapshot @ 0x1801106F0 (PssNtFreeRemoteSnapshot.c)
 *     sub_180111530 @ 0x180111530 (sub_180111530.c)
 *     sub_1801117B8 @ 0x1801117B8 (sub_1801117B8.c)
 *     sub_180113A08 @ 0x180113A08 (sub_180113A08.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  NTSTATUS result; // eax

  result = 63;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
