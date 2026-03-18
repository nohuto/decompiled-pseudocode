/*
 * XREFs of PsIsThreadTerminating @ 0x1400891D0
 * Callers:
 *     IopWaitForLockAlertable @ 0x14000EBDC (IopWaitForLockAlertable.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
}
