/*
 * XREFs of ZwRaiseException @ 0x18009F2D0
 * Callers:
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     KiUserExceptionDispatcher @ 0x1800A0490 (KiUserExceptionDispatcher.c)
 *     sub_1800CFBE0 @ 0x1800CFBE0 (sub_1800CFBE0.c)
 *     sub_1800DC838 @ 0x1800DC838 (sub_1800DC838.c)
 *     RtlEnterUmsSchedulingMode @ 0x1800F36C0 (RtlEnterUmsSchedulingMode.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 * Callees:
 *     <none>
 */

__int64 ZwRaiseException()
{
  __int64 result; // rax

  result = 352LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
