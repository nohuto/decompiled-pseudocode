/*
 * XREFs of ZwTerminateProcess @ 0x18009D410
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x180007200 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     LdrpInitializeThread @ 0x180022CE8 (LdrpInitializeThread.c)
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLoadShimEngine @ 0x180069284 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180069520 (LdrpInitializeShimDllDependencies.c)
 *     RtlExitUserProcess @ 0x18006B150 (RtlExitUserProcess.c)
 *     RtlUserThreadStart @ 0x18006D700 (RtlUserThreadStart.c)
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 *     UninitUser32Proc @ 0x18008CB70 (UninitUser32Proc.c)
 *     __raise_securityfailure @ 0x18008CE74 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008CEA0 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CC040 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4FF8 (LdrpCompleteProcessCloning.c)
 *     LdrpFatalExceptionFilter @ 0x1800D582C (LdrpFatalExceptionFilter.c)
 *     LdrpGenericExceptionFilter @ 0x1800D5908 (LdrpGenericExceptionFilter.c)
 *     RtlpProcessReflectionStartup @ 0x1800D64C0 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800DBAB0 (RtlReportExceptionEx.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DC8F8 (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlAssert @ 0x1800EA560 (RtlAssert.c)
 *     RtlReportFatalFailure @ 0x1800F9130 (RtlReportFatalFailure.c)
 *     TppTerminateProcess @ 0x18010F19C (TppTerminateProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 44;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
