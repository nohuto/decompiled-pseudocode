/*
 * XREFs of ZwGetCompleteWnfStateSubscription @ 0x18009E450
 * Callers:
 *     sub_1800065D0 @ 0x1800065D0 (sub_1800065D0.c)
 *     sub_1800066EC @ 0x1800066EC (sub_1800066EC.c)
 *     sub_18008BDC0 @ 0x18008BDC0 (sub_18008BDC0.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetCompleteWnfStateSubscription()
{
  __int64 result; // rax

  result = 236LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
