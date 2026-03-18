/*
 * XREFs of PsIsProtectedProcessLight @ 0x140086040
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcessLight(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1786) & 7) == 1;
}
