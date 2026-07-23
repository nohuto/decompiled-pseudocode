/*
 * XREFs of ZwAllocateVirtualMemory @ 0x18009C9E0
 * Callers:
 *     RtlExtendMemoryZone @ 0x1800025F0 (RtlExtendMemoryZone.c)
 *     sub_180003BA4 @ 0x180003BA4 (sub_180003BA4.c)
 *     sub_180005400 @ 0x180005400 (sub_180005400.c)
 *     sub_18000550C @ 0x18000550C (sub_18000550C.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_18003F9C0 @ 0x18003F9C0 (sub_18003F9C0.c)
 *     sub_180047214 @ 0x180047214 (sub_180047214.c)
 *     sub_180048BD4 @ 0x180048BD4 (sub_180048BD4.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     sub_18004B17C @ 0x18004B17C (sub_18004B17C.c)
 *     RtlCreateQueryDebugBuffer @ 0x18005AD00 (RtlCreateQueryDebugBuffer.c)
 *     RtlAllocateHandle @ 0x18005B950 (RtlAllocateHandle.c)
 *     RtlCreateMemoryZone @ 0x18006F0A0 (RtlCreateMemoryZone.c)
 *     sub_18007013C @ 0x18007013C (sub_18007013C.c)
 *     RtlCreateUserStack @ 0x180074900 (RtlCreateUserStack.c)
 *     RtlCommitDebugInfo_0 @ 0x180075708 (RtlCommitDebugInfo_0.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 *     sub_1800D6400 @ 0x1800D6400 (sub_1800D6400.c)
 *     sub_1800D7D40 @ 0x1800D7D40 (sub_1800D7D40.c)
 *     sub_1800DC748 @ 0x1800DC748 (sub_1800DC748.c)
 *     sub_1800DCC38 @ 0x1800DCC38 (sub_1800DCC38.c)
 *     sub_1800DD010 @ 0x1800DD010 (sub_1800DD010.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     RtlValidateProcessHeaps @ 0x1800EFA30 (RtlValidateProcessHeaps.c)
 *     sub_1800EFB70 @ 0x1800EFB70 (sub_1800EFB70.c)
 *     sub_1800F085C @ 0x1800F085C (sub_1800F085C.c)
 *     sub_1800FAB90 @ 0x1800FAB90 (sub_1800FAB90.c)
 *     sub_1800FB034 @ 0x1800FB034 (sub_1800FB034.c)
 *     sub_1800FB114 @ 0x1800FB114 (sub_1800FB114.c)
 *     sub_1800FC320 @ 0x1800FC320 (sub_1800FC320.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_180106798 @ 0x180106798 (sub_180106798.c)
 *     sub_18010E404 @ 0x18010E404 (sub_18010E404.c)
 *     PssNtCaptureSnapshot @ 0x1801101A0 (PssNtCaptureSnapshot.c)
 *     sub_180111530 @ 0x180111530 (sub_180111530.c)
 *     sub_180111DA4 @ 0x180111DA4 (sub_180111DA4.c)
 *     sub_180112808 @ 0x180112808 (sub_180112808.c)
 *     sub_1801134A0 @ 0x1801134A0 (sub_1801134A0.c)
 *     sub_180113A08 @ 0x180113A08 (sub_180113A08.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  NTSTATUS result; // eax

  result = 24;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
