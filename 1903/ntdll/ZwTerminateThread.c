/*
 * XREFs of ZwTerminateThread @ 0x18009D140
 * Callers:
 *     EtwpCreateEtwThread @ 0x180005680 (EtwpCreateEtwThread.c)
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 *     RtlExitUserThread @ 0x18006D500 (RtlExitUserThread.c)
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7B10 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DC6A0 (WerReportExceptionWorker.c)
 *     RtlAssert @ 0x1800EA470 (RtlAssert.c)
 *     sub_1800F085C @ 0x1800F085C (sub_1800F085C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 83;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
