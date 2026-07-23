/*
 * XREFs of ZwAlertThreadByThreadId @ 0x18009D4B0
 * Callers:
 *     sub_180006358 @ 0x180006358 (sub_180006358.c)
 *     sub_180006FCC @ 0x180006FCC (sub_180006FCC.c)
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     sub_180035E30 @ 0x180035E30 (sub_180035E30.c)
 *     sub_180066D3C @ 0x180066D3C (sub_180066D3C.c)
 *     RtlWakeAllConditionVariable @ 0x18006D270 (RtlWakeAllConditionVariable.c)
 *     sub_180079074 @ 0x180079074 (sub_180079074.c)
 *     sub_1800823E0 @ 0x1800823E0 (sub_1800823E0.c)
 *     sub_1800826E4 @ 0x1800826E4 (sub_1800826E4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThreadByThreadId(HANDLE ThreadId)
{
  NTSTATUS result; // eax

  result = 111;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
