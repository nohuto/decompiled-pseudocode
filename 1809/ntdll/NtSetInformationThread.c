/*
 * XREFs of NtSetInformationThread @ 0x1800A04A0
 * Callers:
 *     TppWorkerFindTask @ 0x180015BF4 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001725C (TppCallbackCheckThreadAfterCallback.c)
 *     TppCritSetThread @ 0x180029604 (TppCritSetThread.c)
 *     RtlpTpResumeImpersonation @ 0x18002BCB8 (RtlpTpResumeImpersonation.c)
 *     RtlpTpTimerCallback @ 0x18002E890 (RtlpTpTimerCallback.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x18002EFD0 (RtlSetThreadWorkOnBehalfTicket.c)
 *     RtlpTpRevertCapture @ 0x18002F218 (RtlpTpRevertCapture.c)
 *     RtlpTpWorkCallback @ 0x18002F9F0 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x180030240 (RtlpTpWaitCallback.c)
 *     EtwpLogger @ 0x180059EE0 (EtwpLogger.c)
 *     TppAlpcpExecuteCallback @ 0x180069EA0 (TppAlpcpExecuteCallback.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x18006EAF0 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlAcquirePrivilege @ 0x18007C230 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18007C4A0 (RtlImpersonateSelfEx.c)
 *     TppCritResetThread @ 0x18008464C (TppCritResetThread.c)
 *     RtlReleasePrivilege @ 0x180084C30 (RtlReleasePrivilege.c)
 *     RtlpTpImpersonate @ 0x1800891B0 (RtlpTpImpersonate.c)
 *     RtlSetThreadIsCritical @ 0x18008E010 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800CE050 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CE0C0 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800DD760 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800DEA90 (WerReportExceptionWorker.c)
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800F68D0 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800F6994 (RtlpDetachThreadFromUmsCompletionList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  NTSTATUS result; // eax

  result = 13;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
