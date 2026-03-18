/*
 * XREFs of KiTpReadOperandValue @ 0x14029F2BC
 * Callers:
 *     KiTpEmulateGroup0Instruction @ 0x14029E310 (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x14029E61C (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateInstruction @ 0x14029E7FC (KiTpEmulateInstruction.c)
 * Callees:
 *     KiTpAccessMemory @ 0x14029DFA0 (KiTpAccessMemory.c)
 *     KiTpSignExtendOperandValue @ 0x14029F5A8 (KiTpSignExtendOperandValue.c)
 */

__int64 __fastcall KiTpReadOperandValue(__int64 a1, __int64 a2, volatile void *a3, char a4, char a5, _BYTE *a6)
{
  int v7; // r8d

  v7 = KiTpAccessMemory(a2, a6, a3, a4, a5, *(_BYTE *)(a1 + 1) >> 3, 0);
  if ( v7 >= 0 )
    *(_QWORD *)a6 = KiTpSignExtendOperandValue(a1, *(_QWORD *)a6);
  return (unsigned int)v7;
}
