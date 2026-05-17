/*
 * XREFs of ZwResumeThread @ 0x18009D8D0
 * Callers:
 *     EtwpCreateEtwThread @ 0x180005680 (EtwpCreateEtwThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7BD0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DC760 (WerReportExceptionWorker.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F093C (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800F8D70 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwResumeThread()
{
  __int64 result; // rax

  result = 82LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
