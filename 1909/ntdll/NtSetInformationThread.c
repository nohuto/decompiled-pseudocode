/*
 * XREFs of NtSetInformationThread @ 0x18009D030
 * Callers:
 *     RtlpTpWaitCallback @ 0x18002EA00 (RtlpTpWaitCallback.c)
 *     RtlpTpWorkCallback @ 0x18002F4F0 (RtlpTpWorkCallback.c)
 *     TppCritSetThread @ 0x1800300DC (TppCritSetThread.c)
 *     RtlpTpTimerCallback @ 0x1800305A0 (RtlpTpTimerCallback.c)
 *     RtlpTpRevertCapture @ 0x180030D7C (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x1800310E4 (RtlpTpResumeImpersonation.c)
 *     TppWorkCallbackPrologRelease @ 0x180032F0C (TppWorkCallbackPrologRelease.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x1800337C0 (RtlSetThreadWorkOnBehalfTicket.c)
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180035510 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x180067E70 (RtlClearThreadWorkOnBehalfTicket.c)
 *     EtwpLogger @ 0x18006D190 (EtwpLogger.c)
 *     RtlAcquirePrivilege @ 0x180075F50 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800761C0 (RtlImpersonateSelfEx.c)
 *     TppCritResetThread @ 0x18007EEC0 (TppCritResetThread.c)
 *     RtlReleasePrivilege @ 0x180080210 (RtlReleasePrivilege.c)
 *     RtlpTpImpersonate @ 0x180085538 (RtlpTpImpersonate.c)
 *     RtlSetThreadIsCritical @ 0x18008AD20 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800CC8C0 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CC930 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800DB5F0 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800DC760 (WerReportExceptionWorker.c)
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800F3C80 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800F3D48 (RtlpDetachThreadFromUmsCompletionList.c)
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
