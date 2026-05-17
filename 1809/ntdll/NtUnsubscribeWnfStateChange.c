/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x1800A3B90
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x18005E718 (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     <none>
 */

__int64 NtUnsubscribeWnfStateChange()
{
  __int64 result; // rax

  result = 454LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
