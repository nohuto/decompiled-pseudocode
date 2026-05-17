/*
 * XREFs of NtWaitForSingleObject @ 0x18009CF10
 * Callers:
 *     RtlWow64SuspendThread @ 0x1800023F0 (RtlWow64SuspendThread.c)
 *     RtlWaitForWnfMetaNotification @ 0x180006140 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWaitOnCriticalSection @ 0x180007200 (RtlpWaitOnCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     RtlAcquireResourceShared @ 0x18005FBB0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18005FCC0 (RtlAcquireResourceExclusive.c)
 *     RtlReportSilentProcessExit @ 0x18006B450 (RtlReportSilentProcessExit.c)
 *     EtwpLogger @ 0x18006D190 (EtwpLogger.c)
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 *     RtlQueryProcessDebugInformation @ 0x180075580 (RtlQueryProcessDebugInformation.c)
 *     EtwpStopUmLogger @ 0x180087300 (EtwpStopUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x1800874E0 (EtwpSynchronizeWithLogger.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CF550 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D5F30 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D64C0 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7BD0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendProcess @ 0x1800DB610 (RtlWow64SuspendProcess.c)
 *     WaitForWerSvc @ 0x1800DC6A8 (WaitForWerSvc.c)
 *     LdrpResReadFile @ 0x1800E2AD8 (LdrpResReadFile.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F093C (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800F3710 (RtlDequeueUmsCompletionListItems.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1800FBDD0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 4;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
