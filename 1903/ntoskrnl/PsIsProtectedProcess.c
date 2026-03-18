/*
 * XREFs of PsIsProtectedProcess @ 0x1400E5070
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcess(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1786) & 7) != 0;
}
