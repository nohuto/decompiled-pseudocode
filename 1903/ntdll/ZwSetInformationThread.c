/*
 * XREFs of ZwSetInformationThread @ 0x18009C880
 * Callers:
 *     Callback @ 0x18002EA00 (Callback.c)
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     sub_1800300DC @ 0x1800300DC (sub_1800300DC.c)
 *     sub_1800305A0 @ 0x1800305A0 (sub_1800305A0.c)
 *     sub_180030D7C @ 0x180030D7C (sub_180030D7C.c)
 *     sub_1800310E4 @ 0x1800310E4 (sub_1800310E4.c)
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x1800337C0 (RtlSetThreadWorkOnBehalfTicket.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_180035510 @ 0x180035510 (sub_180035510.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x180067C20 (RtlClearThreadWorkOnBehalfTicket.c)
 *     sub_18006CF40 @ 0x18006CF40 (sub_18006CF40.c)
 *     RtlAcquirePrivilege @ 0x180075AD0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180075D40 (RtlImpersonateSelfEx.c)
 *     sub_18007E820 @ 0x18007E820 (sub_18007E820.c)
 *     RtlReleasePrivilege @ 0x18007FB70 (RtlReleasePrivilege.c)
 *     sub_180084E98 @ 0x180084E98 (sub_180084E98.c)
 *     RtlSetThreadIsCritical @ 0x18008A680 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800CC800 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CC870 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800DB530 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800DC6A0 (WerReportExceptionWorker.c)
 *     sub_1800F3BA0 @ 0x1800F3BA0 (sub_1800F3BA0.c)
 *     sub_1800F3C68 @ 0x1800F3C68 (sub_1800F3C68.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationThread(
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
