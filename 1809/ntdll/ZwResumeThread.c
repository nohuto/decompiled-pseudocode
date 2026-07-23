/*
 * XREFs of ZwResumeThread @ 0x1800A0D40
 * Callers:
 *     EtwpCreateEtwThread @ 0x180051000 (EtwpCreateEtwThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9C80 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendThread @ 0x1800DD780 (RtlWow64SuspendThread.c)
 *     WerReportExceptionWorker @ 0x1800DEA90 (WerReportExceptionWorker.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3788 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800FB0D0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 82;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
