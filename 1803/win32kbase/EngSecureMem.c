/*
 * XREFs of EngSecureMem @ 0x1C00D8D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall EngSecureMem(PVOID Address, ULONG cjLength)
{
  return MmSecureVirtualMemory(Address, cjLength, 4u);
}
