/*
 * XREFs of PsIsSystemProcess @ 0x14001D1E0
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1788) & 0x1000) != 0;
}
