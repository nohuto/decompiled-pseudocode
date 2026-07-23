/*
 * XREFs of NtQueryInformationProcess @ 0x1800A0620
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000E9A4 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpSubSegmentInitialize @ 0x18000ED20 (RtlpSubSegmentInitialize.c)
 *     RtlUserThreadStart @ 0x18005A8A0 (RtlUserThreadStart.c)
 *     RtlpCallVectoredHandlers @ 0x18006CC90 (RtlpCallVectoredHandlers.c)
 *     WerpGlobalFlagsForProcess @ 0x18006D8F0 (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x18006DAAC (WerpProcessId.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180071558 (LdrpLogLoadFailureEtwEvent.c)
 *     RtlDecodePointer @ 0x180072AF0 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x180075900 (RtlEncodePointer.c)
 *     RtlSetUnhandledExceptionFilter @ 0x1800833D0 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180084210 (RtlpAddVectoredHandler.c)
 *     LdrpQueryInformationCurrentProcess @ 0x18008C440 (LdrpQueryInformationCurrentProcess.c)
 *     RtlSetProcessIsCritical @ 0x18008EF70 (RtlSetProcessIsCritical.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D14D0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpMapCleanModuleView @ 0x1800D76D4 (LdrpMapCleanModuleView.c)
 *     LdrpFatalExceptionFilter @ 0x1800D78AC (LdrpFatalExceptionFilter.c)
 *     RtlCreateProcessReflection @ 0x1800D7C30 (RtlCreateProcessReflection.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800DD510 (RtlWow64GetSharedInfoProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DD780 (RtlWow64SuspendThread.c)
 *     RtlDecodeRemotePointer @ 0x1800DDB00 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800DDB70 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800DDD10 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x1800DEEA0 (WerpIsDebugPortPresent.c)
 *     SetAssertBufferPtrinPeb @ 0x1800DF148 (SetAssertBufferPtrinPeb.c)
 *     RtlpPossibleDeadlock @ 0x1800E9A20 (RtlpPossibleDeadlock.c)
 *     RtlpInitRandomExVector @ 0x1800FE940 (RtlpInitRandomExVector.c)
 *     RtlpGetModifiedProcessCookie @ 0x180103CA4 (RtlpGetModifiedProcessCookie.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x180106CF4 (RtlpCreateExecutionRequiredRequest.c)
 *     TppExceptionFilter @ 0x1801107C4 (TppExceptionFilter.c)
 *     PsspCaptureHandleTrace @ 0x180112254 (PsspCaptureHandleTrace.c)
 *     PsspCaptureProcessInformation @ 0x1801125A8 (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x18011302C (PsspCaptureHandleInformation.c)
 *     PsspDumpObject_Process @ 0x1801133D0 (PsspDumpObject_Process.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 25;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
