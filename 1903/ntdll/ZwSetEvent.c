/*
 * XREFs of ZwSetEvent @ 0x18009C8A0
 * Callers:
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 *     sub_18002EFD0 @ 0x18002EFD0 (sub_18002EFD0.c)
 *     sub_18003020C @ 0x18003020C (sub_18003020C.c)
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180054024 @ 0x180054024 (sub_180054024.c)
 *     sub_18006CF40 @ 0x18006CF40 (sub_18006CF40.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     LdrProcessInitializationComplete @ 0x18007F5B0 (LdrProcessInitializationComplete.c)
 *     sub_1800826E4 @ 0x1800826E4 (sub_1800826E4.c)
 *     sub_1800846F0 @ 0x1800846F0 (sub_1800846F0.c)
 *     sub_180086E40 @ 0x180086E40 (sub_180086E40.c)
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 *     sub_1800D6400 @ 0x1800D6400 (sub_1800D6400.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E6E60 (RtlpUnWaitCriticalSection.c)
 *     sub_1800F8558 @ 0x1800F8558 (sub_1800F8558.c)
 *     sub_1800FBCD0 @ 0x1800FBCD0 (sub_1800FBCD0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 14;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
