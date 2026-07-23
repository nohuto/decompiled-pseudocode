/*
 * XREFs of ZwUnmapViewOfSection @ 0x18009CC20
 * Callers:
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     sub_18002A0B0 @ 0x18002A0B0 (sub_18002A0B0.c)
 *     sub_1800593F0 @ 0x1800593F0 (sub_1800593F0.c)
 *     sub_1800598B0 @ 0x1800598B0 (sub_1800598B0.c)
 *     sub_1800599C4 @ 0x1800599C4 (sub_1800599C4.c)
 *     sub_18005A624 @ 0x18005A624 (sub_18005A624.c)
 *     RtlCreateQueryDebugBuffer @ 0x18005AD00 (RtlCreateQueryDebugBuffer.c)
 *     sub_18006773C @ 0x18006773C (sub_18006773C.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006F560 (LdrUnloadAlternateResourceModuleEx.c)
 *     sub_180070218 @ 0x180070218 (sub_180070218.c)
 *     RtlDestroyQueryDebugBuffer @ 0x1800757A0 (RtlDestroyQueryDebugBuffer.c)
 *     sub_1800757D8 @ 0x1800757D8 (sub_1800757D8.c)
 *     sub_1800795E8 @ 0x1800795E8 (sub_1800795E8.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007B470 (RtlGetLocaleFileMappingAddress.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089690 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrFlushAlternateResourceModules @ 0x18008AA00 (LdrFlushAlternateResourceModules.c)
 *     LdrResRelease @ 0x18008BB60 (LdrResRelease.c)
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D8020 (RtlpQueryProcessDebugInformationRemote.c)
 *     sub_1800D8220 @ 0x1800D8220 (sub_1800D8220.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 *     sub_1800DC8F0 @ 0x1800DC8F0 (sub_1800DC8F0.c)
 *     RtlComputeImportTableHash @ 0x1800DF5C0 (RtlComputeImportTableHash.c)
 *     sub_1800E0728 @ 0x1800E0728 (sub_1800E0728.c)
 *     sub_1800F02D0 @ 0x1800F02D0 (sub_1800F02D0.c)
 *     sub_1800F03F0 @ 0x1800F03F0 (sub_1800F03F0.c)
 *     sub_1800F0E40 @ 0x1800F0E40 (sub_1800F0E40.c)
 *     sub_1800F6C80 @ 0x1800F6C80 (sub_1800F6C80.c)
 *     RtlHeapTrkInitialize @ 0x1800F76D0 (RtlHeapTrkInitialize.c)
 *     sub_1801028F0 @ 0x1801028F0 (sub_1801028F0.c)
 *     sub_180104440 @ 0x180104440 (sub_180104440.c)
 *     PssNtFreeWalkMarker @ 0x180110A90 (PssNtFreeWalkMarker.c)
 *     sub_180111038 @ 0x180111038 (sub_180111038.c)
 *     sub_180111230 @ 0x180111230 (sub_180111230.c)
 *     sub_180111530 @ 0x180111530 (sub_180111530.c)
 *     sub_1801118C0 @ 0x1801118C0 (sub_1801118C0.c)
 *     sub_180111DA4 @ 0x180111DA4 (sub_180111DA4.c)
 *     sub_180112808 @ 0x180112808 (sub_180112808.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  NTSTATUS result; // eax

  result = 42;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
