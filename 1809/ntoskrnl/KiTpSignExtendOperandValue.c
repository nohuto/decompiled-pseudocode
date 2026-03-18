/*
 * XREFs of KiTpSignExtendOperandValue @ 0x14029F5A8
 * Callers:
 *     KiTpEmulateGroup0Instruction @ 0x14029E310 (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateInstruction @ 0x14029E7FC (KiTpEmulateInstruction.c)
 *     KiTpReadOperandValue @ 0x14029F2BC (KiTpReadOperandValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTpSignExtendOperandValue(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a1 + 1);
  switch ( v2 )
  {
    case 8:
      return (char)a2;
    case 16:
      return (__int16)a2;
    case 32:
      return (int)a2;
  }
  return a2;
}
