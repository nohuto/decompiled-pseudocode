/*
 * XREFs of ZwTerminateProcess @ 0x1800A0880
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpInitializeThread @ 0x18002356C (LdrpInitializeThread.c)
 *     RtlUserThreadStart @ 0x18005A8A0 (RtlUserThreadStart.c)
 *     RtlpWaitOnCriticalSection @ 0x18005EA34 (RtlpWaitOnCriticalSection.c)
 *     RtlExitUserProcess @ 0x18006CF90 (RtlExitUserProcess.c)
 *     LdrpLoadShimEngine @ 0x1800703EC (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180070688 (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x18007875C (_LdrpInitialize.c)
 *     UninitUser32Proc @ 0x18008FBF0 (UninitUser32Proc.c)
 *     __raise_securityfailure @ 0x18008FEF4 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008FF20 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CD7D0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCompleteProcessCloning @ 0x1800D7168 (LdrpCompleteProcessCloning.c)
 *     LdrpFatalExceptionFilter @ 0x1800D78AC (LdrpFatalExceptionFilter.c)
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 *     RtlpProcessReflectionStartup @ 0x1800D81D0 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800DDDE0 (RtlReportExceptionEx.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DEC28 (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlAssert @ 0x1800ED360 (RtlAssert.c)
 *     RtlReportFatalFailure @ 0x1800FB4C0 (RtlReportFatalFailure.c)
 *     TppTerminateProcess @ 0x1801109AC (TppTerminateProcess.c)
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
