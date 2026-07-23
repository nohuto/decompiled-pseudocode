/*
 * XREFs of RtlDecodeSystemPointer @ 0x180086310
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlDecodeSystemPointer(PVOID Ptr)
{
  return (PVOID)(__ROR8__(Ptr, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
}
