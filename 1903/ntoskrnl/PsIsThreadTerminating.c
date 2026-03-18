/*
 * XREFs of PsIsThreadTerminating @ 0x1400159A0
 * Callers:
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
}
