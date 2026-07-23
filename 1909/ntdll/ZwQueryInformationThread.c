/*
 * XREFs of ZwQueryInformationThread @ 0x18009D330
 * Callers:
 *     RtlWow64SuspendThread @ 0x1800023F0 (RtlWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x180002504 (RtlpWow64OpenThreadProcess.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180004BA8 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpDetectDetour @ 0x1800635CC (LdrpDetectDetour.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18006AF50 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlExitUserThread @ 0x18006D750 (RtlExitUserThread.c)
 *     TppIsWorkerThread @ 0x18006D7FC (TppIsWorkerThread.c)
 *     RtlQueryProcessDebugInformation @ 0x180075580 (RtlQueryProcessDebugInformation.c)
 *     RtlCheckHeldCriticalSections @ 0x18007DC10 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x18008AD20 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800CCA30 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800CCFA0 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrpDoDebuggerBreak @ 0x1800D105C (LdrpDoDebuggerBreak.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7BD0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800DB420 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800DB450 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendProcess @ 0x1800DB610 (RtlWow64SuspendProcess.c)
 *     WerpThreadId @ 0x1800DCBE0 (WerpThreadId.c)
 *     PsspSampleCounters @ 0x180111100 (PsspSampleCounters.c)
 *     PsspDumpObject_Thread @ 0x180112360 (PsspDumpObject_Thread.c)
 *     PsspDumpThread @ 0x180112C84 (PsspDumpThread.c)
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
