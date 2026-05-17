/*
 * XREFs of RtlDecodeSystemPointer @ 0x180086300
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDecodeSystemPointer(__int64 a1)
{
  return __ROR8__(a1, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
}
