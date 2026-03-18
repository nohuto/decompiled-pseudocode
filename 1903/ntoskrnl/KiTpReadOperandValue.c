/*
 * XREFs of KiTpReadOperandValue @ 0x1402B5258
 * Callers:
 *     KiTpEmulateGroup0Instruction @ 0x1402B42AC (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x1402B45B8 (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateInstruction @ 0x1402B4798 (KiTpEmulateInstruction.c)
 * Callees:
 *     KiTpAccessMemory @ 0x1402B3F3C (KiTpAccessMemory.c)
 *     KiTpSignExtendOperandValue @ 0x1402B5544 (KiTpSignExtendOperandValue.c)
 */

__int64 __fastcall KiTpReadOperandValue(__int64 a1, __int64 a2, volatile void *a3, char a4, char a5, _BYTE *a6)
{
  int v7; // r8d

  v7 = KiTpAccessMemory(a2, a6, a3, a4, a5, *(_BYTE *)(a1 + 1) >> 3, 0);
  if ( v7 >= 0 )
    *(_QWORD *)a6 = KiTpSignExtendOperandValue(a1, *(_QWORD *)a6);
  return (unsigned int)v7;
}
