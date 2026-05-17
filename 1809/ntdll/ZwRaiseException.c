/*
 * XREFs of ZwRaiseException @ 0x1800A2EB0
 * Callers:
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     KiUserExceptionDispatcher @ 0x1800A4070 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D14D0 (LdrpLogFatalUserCallbackException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DEC28 (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlEnterUmsSchedulingMode @ 0x1800F63F0 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     <none>
 */

__int64 ZwRaiseException()
{
  __int64 result; // rax

  result = 351LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
