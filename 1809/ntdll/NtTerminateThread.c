/*
 * XREFs of NtTerminateThread @ 0x1800A0D40
 * Callers:
 *     EtwpCreateEtwThread @ 0x180051000 (EtwpCreateEtwThread.c)
 *     RtlExitUserThread @ 0x18005A8F0 (RtlExitUserThread.c)
 *     RtlExitUserProcess @ 0x18006CF90 (RtlExitUserProcess.c)
 *     RtlQueryProcessDebugInformation @ 0x18007D750 (RtlQueryProcessDebugInformation.c)
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9C80 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DEA90 (WerReportExceptionWorker.c)
 *     RtlAssert @ 0x1800ED360 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3788 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     <none>
 */

__int64 NtTerminateThread()
{
  __int64 result; // rax

  result = 83LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
