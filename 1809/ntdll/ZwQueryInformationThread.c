/*
 * XREFs of ZwQueryInformationThread @ 0x1800A07A0
 * Callers:
 *     LdrpDetectDetour @ 0x180028E48 (LdrpDetectDetour.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlExitUserThread @ 0x18005A8F0 (RtlExitUserThread.c)
 *     TpCheckTerminateWorker @ 0x18005A950 (TpCheckTerminateWorker.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x180075190 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlQueryProcessDebugInformation @ 0x18007D760 (RtlQueryProcessDebugInformation.c)
 *     RtlCheckHeldCriticalSections @ 0x1800819A0 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x18008E010 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800CE1C0 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800CE730 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrpDoDebuggerBreak @ 0x1800D288C (LdrpDoDebuggerBreak.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9C80 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800DD590 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800DD5C0 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendThread @ 0x1800DD780 (RtlWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DD9C0 (RtlpWow64OpenThreadProcess.c)
 *     WerpThreadId @ 0x1800DEF2C (WerpThreadId.c)
 *     PsspSampleCounters @ 0x1801121EC (PsspSampleCounters.c)
 *     PsspDumpObject_Thread @ 0x1801134C0 (PsspDumpObject_Thread.c)
 *     PsspDumpThread @ 0x180113E04 (PsspDumpThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 37;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
