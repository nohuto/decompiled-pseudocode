/*
 * XREFs of ZwDuplicateObject @ 0x1800A0A60
 * Callers:
 *     TpCheckTerminateWorker @ 0x18005A950 (TpCheckTerminateWorker.c)
 *     RtlReportSilentProcessExit @ 0x18006D060 (RtlReportSilentProcessExit.c)
 *     RtlQueryProcessDebugInformation @ 0x18007D750 (RtlQueryProcessDebugInformation.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18007F628 (TppPoolUpdateTrimmedWorker.c)
 *     RtlCreateProcessReflection @ 0x1800D7C30 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D81D0 (RtlpProcessReflectionStartup.c)
 *     RtlWow64SuspendThread @ 0x1800DD780 (RtlWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DD9C0 (RtlpWow64OpenThreadProcess.c)
 *     RtlReportExceptionEx @ 0x1800DDDE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DE2B0 (RtlReportExceptionHelper.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3788 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlGetUmsCompletionListEvent @ 0x1800F6700 (RtlGetUmsCompletionListEvent.c)
 *     PssNtFreeRemoteSnapshot @ 0x180111FE0 (PssNtFreeRemoteSnapshot.c)
 *     PsspWalkHandleTable @ 0x1801137F0 (PsspWalkHandleTable.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180114174 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180114744 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwDuplicateObject()
{
  __int64 result; // rax

  result = 60LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
