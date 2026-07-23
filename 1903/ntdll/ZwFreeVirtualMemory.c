/*
 * XREFs of ZwFreeVirtualMemory @ 0x18009CAA0
 * Callers:
 *     RtlExtendMemoryZone @ 0x1800025F0 (RtlExtendMemoryZone.c)
 *     sub_180003BA4 @ 0x180003BA4 (sub_180003BA4.c)
 *     sub_180005400 @ 0x180005400 (sub_180005400.c)
 *     sub_180048120 @ 0x180048120 (sub_180048120.c)
 *     sub_180048170 @ 0x180048170 (sub_180048170.c)
 *     sub_18004DE5C @ 0x18004DE5C (sub_18004DE5C.c)
 *     sub_18004E2D4 @ 0x18004E2D4 (sub_18004E2D4.c)
 *     sub_18004F6D0 @ 0x18004F6D0 (sub_18004F6D0.c)
 *     sub_18004FAA8 @ 0x18004FAA8 (sub_18004FAA8.c)
 *     sub_180050258 @ 0x180050258 (sub_180050258.c)
 *     RtlCreateQueryDebugBuffer @ 0x18005AD00 (RtlCreateQueryDebugBuffer.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     sub_18007C668 @ 0x18007C668 (sub_18007C668.c)
 *     RtlFreeUserStack @ 0x18007E900 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x1800839B0 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x180084850 (RtlDestroyHandleTable.c)
 *     sub_1800874F8 @ 0x1800874F8 (sub_1800874F8.c)
 *     LdrCreateEnclave @ 0x1800CD360 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800CD470 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 *     sub_1800D6400 @ 0x1800D6400 (sub_1800D6400.c)
 *     WerReportExceptionWorker @ 0x1800DC6A0 (WerReportExceptionWorker.c)
 *     sub_1800DCA58 @ 0x1800DCA58 (sub_1800DCA58.c)
 *     sub_1800DCC38 @ 0x1800DCC38 (sub_1800DCC38.c)
 *     sub_1800DD010 @ 0x1800DD010 (sub_1800DD010.c)
 *     sub_1800F085C @ 0x1800F085C (sub_1800F085C.c)
 *     sub_1800FAB50 @ 0x1800FAB50 (sub_1800FAB50.c)
 *     sub_1800FAB90 @ 0x1800FAB90 (sub_1800FAB90.c)
 *     sub_1800FC36C @ 0x1800FC36C (sub_1800FC36C.c)
 *     sub_18010E498 @ 0x18010E498 (sub_18010E498.c)
 *     PssNtFreeRemoteSnapshot @ 0x1801106F0 (PssNtFreeRemoteSnapshot.c)
 *     PssNtFreeSnapshot @ 0x180110900 (PssNtFreeSnapshot.c)
 *     sub_180111530 @ 0x180111530 (sub_180111530.c)
 *     sub_180111DA4 @ 0x180111DA4 (sub_180111DA4.c)
 *     sub_180112D84 @ 0x180112D84 (sub_180112D84.c)
 *     sub_1801134A0 @ 0x1801134A0 (sub_1801134A0.c)
 *     sub_180113A08 @ 0x180113A08 (sub_180113A08.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  NTSTATUS result; // eax

  result = 30;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
