/*
 * XREFs of PsIsProtectedProcessLight @ 0x1400E2E30
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcessLight(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1786) & 7) == 1;
}
