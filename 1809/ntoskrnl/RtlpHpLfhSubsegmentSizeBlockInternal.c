/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlockInternal @ 0x1400BF890
 * Callers:
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x1400BECB0 (RtlpHpLfhSubsegmentSizeBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlockInternal(__int64 a1, __int64 a2, int a3, int *a4)
{
  unsigned __int64 v4; // r11
  __int64 result; // rax
  int v6; // ecx
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int16 v9; // dx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = (unsigned __int16)(*(_WORD *)(a1 + 40) ^ ((unsigned int)a1 >> 12));
  result = (unsigned __int16)qword_14040F0E8 ^ (unsigned int)v4;
  if ( ((*(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)(2 * a3) >> 6) + 48) >> ((2 * a3) & 0x3F)) & 2) != 0 )
  {
    v8 = ((unsigned __int16)qword_14040F0E8 ^ v4) + a2;
    v9 = *(_WORD *)(v8 - 2);
    v7 = (unsigned __int16)v9;
    if ( (v9 & 0x4000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      v9 = *(_WORD *)(v8 - 2);
    }
    v6 = (v7 >> 14) & 1;
    if ( v9 >= 0 )
      result = (unsigned int)result - (v9 & 0x3FFF);
    else
      result = (unsigned int)(result - 1);
  }
  else
  {
    v6 = 0;
  }
  if ( a4 )
    *a4 = v6;
  return result;
}
