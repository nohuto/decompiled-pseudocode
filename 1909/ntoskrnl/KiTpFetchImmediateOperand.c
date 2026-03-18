/*
 * XREFs of KiTpFetchImmediateOperand @ 0x1402B4DA4
 * Callers:
 *     KiTpEmulateGroup11Instruction @ 0x1402B4268 (KiTpEmulateGroup11Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x1402B4318 (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateMovRegImm @ 0x1402B4B5C (KiTpEmulateMovRegImm.c)
 * Callees:
 *     KiTpFetchInstructionBytes @ 0x1402B4E14 (KiTpFetchInstructionBytes.c)
 */

__int64 __fastcall KiTpFetchImmediateOperand(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // eax
  __int64 result; // rax
  char v6; // cl
  __int64 v7; // rcx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(unsigned __int8 *)(a1 + 23) >> 3;
  if ( a2 )
  {
    *a3 += v4;
    return 0LL;
  }
  else
  {
    result = KiTpFetchInstructionBytes(a1, &v8, v4, a3);
    if ( (int)result >= 0 )
    {
      v6 = *(_BYTE *)(a1 + 23);
      switch ( v6 )
      {
        case 8:
          v7 = (char)v8;
          break;
        case 16:
          v7 = (__int16)v8;
          break;
        case 32:
          v7 = (int)v8;
          break;
        default:
          v7 = v8;
          break;
      }
      *(_QWORD *)(a1 + 32) = v7;
    }
  }
  return result;
}
