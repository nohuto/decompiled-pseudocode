/*
 * XREFs of PsIsSystemProcess @ 0x14001CDF0
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1788) & 0x1000) != 0;
}
