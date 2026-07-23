/*
 * XREFs of NtTerminateThread @ 0x18009D8F0
 * Callers:
 *     EtwpCreateEtwThread @ 0x180005680 (EtwpCreateEtwThread.c)
 *     RtlExitUserProcess @ 0x18006B150 (RtlExitUserProcess.c)
 *     RtlExitUserThread @ 0x18006D750 (RtlExitUserThread.c)
 *     RtlQueryProcessDebugInformation @ 0x180075580 (RtlQueryProcessDebugInformation.c)
 *     LdrpGenericExceptionFilter @ 0x1800D5908 (LdrpGenericExceptionFilter.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7BD0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DC760 (WerReportExceptionWorker.c)
 *     RtlAssert @ 0x1800EA560 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F093C (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 83;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
