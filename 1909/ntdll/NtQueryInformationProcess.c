/*
 * XREFs of NtQueryInformationProcess @ 0x18009D1B0
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x18004A840 (RtlpHeapGenerateRandomValue32.c)
 *     RtlDecodePointer @ 0x180067FF0 (RtlDecodePointer.c)
 *     WerpGlobalFlagsForProcess @ 0x18006B88C (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x18006BA44 (WerpProcessId.c)
 *     RtlUserThreadStart @ 0x18006D700 (RtlUserThreadStart.c)
 *     RtlEncodePointer @ 0x18006FE20 (RtlEncodePointer.c)
 *     RtlpCallVectoredHandlers @ 0x180078F20 (RtlpCallVectoredHandlers.c)
 *     RtlWow64GetSharedInfoProcess @ 0x180079850 (RtlWow64GetSharedInfoProcess.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18007D848 (LdrpLogLoadFailureEtwEvent.c)
 *     RtlSetUnhandledExceptionFilter @ 0x18007F010 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x18007FF70 (RtlpAddVectoredHandler.c)
 *     LdrpQueryInformationCurrentProcess @ 0x180089B10 (LdrpQueryInformationCurrentProcess.c)
 *     RtlSetProcessIsCritical @ 0x18008BBC0 (RtlSetProcessIsCritical.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CFCA0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpMapCleanModuleView @ 0x1800D565C (LdrpMapCleanModuleView.c)
 *     LdrpFatalExceptionFilter @ 0x1800D582C (LdrpFatalExceptionFilter.c)
 *     RtlCreateProcessReflection @ 0x1800D5F30 (RtlCreateProcessReflection.c)
 *     RtlDecodeRemotePointer @ 0x1800DB7D0 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800DB840 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800DB9E0 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x1800DCB5C (WerpIsDebugPortPresent.c)
 *     SetAssertBufferPtrinPeb @ 0x1800DCDF8 (SetAssertBufferPtrinPeb.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E6C20 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E6D78 (RtlpPossibleDeadlock.c)
 *     RtlpInitRandomExVector @ 0x1800FBEA0 (RtlpInitRandomExVector.c)
 *     RtlpGetModifiedProcessCookie @ 0x180101468 (RtlpGetModifiedProcessCookie.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1801043D4 (RtlpCreateExecutionRequiredRequest.c)
 *     TppExceptionFilter @ 0x18010EFB4 (TppExceptionFilter.c)
 *     PsspCaptureHandleTrace @ 0x180111168 (PsspCaptureHandleTrace.c)
 *     PsspCaptureProcessInformation @ 0x1801114BC (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x180111ED4 (PsspCaptureHandleInformation.c)
 *     PsspDumpObject_Process @ 0x180112270 (PsspDumpObject_Process.c)
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
