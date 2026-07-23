/*
 * XREFs of ZwResumeThread @ 0x18009D120
 * Callers:
 *     EtwpCreateEtwThread @ 0x180005680 (EtwpCreateEtwThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7B10 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DC6A0 (WerReportExceptionWorker.c)
 *     sub_1800F085C @ 0x1800F085C (sub_1800F085C.c)
 *     RtlRemoteCall @ 0x1800F8C90 (RtlRemoteCall.c)
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
