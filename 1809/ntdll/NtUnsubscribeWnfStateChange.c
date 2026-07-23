/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x1800A3BB0
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x18005E718 (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  NTSTATUS result; // eax

  result = 454;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
