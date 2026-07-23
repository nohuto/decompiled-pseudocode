/*
 * XREFs of ZwSubscribeWnfStateChange @ 0x18009FD50
 * Callers:
 *     sub_18000645C @ 0x18000645C (sub_18000645C.c)
 *     sub_180009EE8 @ 0x180009EE8 (sub_180009EE8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSubscribeWnfStateChange(
        PCWNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        ULONG EventMask,
        PULONG64 SubscriptionId)
{
  NTSTATUS result; // eax

  result = 436;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
