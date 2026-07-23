/*
 * XREFs of ZwWaitForSingleObject @ 0x18009C760
 * Callers:
 *     RtlWow64SuspendThread @ 0x1800023F0 (RtlWow64SuspendThread.c)
 *     RtlWaitForWnfMetaNotification @ 0x180006140 (RtlWaitForWnfMetaNotification.c)
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     RtlAcquireResourceShared @ 0x18005FB10 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18005FC20 (RtlAcquireResourceExclusive.c)
 *     RtlReportSilentProcessExit @ 0x18006B200 (RtlReportSilentProcessExit.c)
 *     sub_18006CF40 @ 0x18006CF40 (sub_18006CF40.c)
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 *     sub_180086C60 @ 0x180086C60 (sub_180086C60.c)
 *     sub_180086E40 @ 0x180086E40 (sub_180086E40.c)
 *     sub_1800CF490 @ 0x1800CF490 (sub_1800CF490.c)
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 *     sub_1800D6400 @ 0x1800D6400 (sub_1800D6400.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7B10 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendProcess @ 0x1800DB550 (RtlWow64SuspendProcess.c)
 *     sub_1800DC5E8 @ 0x1800DC5E8 (sub_1800DC5E8.c)
 *     sub_1800E29E8 @ 0x1800E29E8 (sub_1800E29E8.c)
 *     sub_1800F085C @ 0x1800F085C (sub_1800F085C.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800F3630 (RtlDequeueUmsCompletionListItems.c)
 *     sub_1800FBCF0 @ 0x1800FBCF0 (sub_1800FBCF0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 4;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
