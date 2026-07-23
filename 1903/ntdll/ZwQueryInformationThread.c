/*
 * XREFs of ZwQueryInformationThread @ 0x18009CB80
 * Callers:
 *     RtlWow64SuspendThread @ 0x1800023F0 (RtlWow64SuspendThread.c)
 *     sub_180002504 @ 0x180002504 (sub_180002504.c)
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     sub_18006352C @ 0x18006352C (sub_18006352C.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18006AD00 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlExitUserThread @ 0x18006D500 (RtlExitUserThread.c)
 *     sub_18006D5AC @ 0x18006D5AC (sub_18006D5AC.c)
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 *     sub_18007D570 @ 0x18007D570 (sub_18007D570.c)
 *     RtlSetThreadIsCritical @ 0x18008A680 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800CC970 (RtlQueryThreadProfiling.c)
 *     sub_1800CCEE0 @ 0x1800CCEE0 (sub_1800CCEE0.c)
 *     sub_1800D0F9C @ 0x1800D0F9C (sub_1800D0F9C.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7B10 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800DB360 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800DB390 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendProcess @ 0x1800DB550 (RtlWow64SuspendProcess.c)
 *     sub_1800DCB20 @ 0x1800DCB20 (sub_1800DCB20.c)
 *     sub_180110FD0 @ 0x180110FD0 (sub_180110FD0.c)
 *     sub_180112230 @ 0x180112230 (sub_180112230.c)
 *     sub_180112B54 @ 0x180112B54 (sub_180112B54.c)
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
