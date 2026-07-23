/*
 * XREFs of KiTpSetFlagsZeroSignParity @ 0x14029F7F8
 * Callers:
 *     KiTpEmulateGroup0Instruction @ 0x14029E600 (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x14029E90C (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateInstruction @ 0x14029EAEC (KiTpEmulateInstruction.c)
 *     KiTpSetFlagsAdd @ 0x14029F60C (KiTpSetFlagsAdd.c)
 *     KiTpSetFlagsSub @ 0x14029F6F8 (KiTpSetFlagsSub.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTpSetFlagsZeroSignParity(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // r10
  __int64 v4; // r9
  unsigned __int8 v5; // r11
  __int64 result; // rax

  v3 = *(_BYTE *)(a1 + 1);
  v4 = a3 >> (v3 - 1);
  v5 = KiTpParityLookupTable[(unsigned __int8)a3];
  if ( v3 < 0x40u )
    a3 &= (1LL << v3) - 1;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFFF3B;
  result = v5;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) |= 4 * (v5 | (a3 == 0 ? 0x10 : 0) | (32 * (v4 & 1)));
  return result;
}
