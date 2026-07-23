/*
 * XREFs of RtlDecodeSystemPointer @ 0x180081A50
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlDecodeSystemPointer(PVOID Ptr)
{
  return (PVOID)(__ROR8__(Ptr, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
}
