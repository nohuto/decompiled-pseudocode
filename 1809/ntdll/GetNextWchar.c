/*
 * XREFs of GetNextWchar @ 0x1800F8560
 * Callers:
 *     RtlGenerate8dot3Name @ 0x1800F86C0 (RtlGenerate8dot3Name.c)
 * Callees:
 *     RtlIsValidOemCharacter @ 0x1800F8D00 (RtlIsValidOemCharacter.c)
 */

__int64 __fastcall GetNextWchar(unsigned __int16 *a1, unsigned int *a2, char a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // edi
  unsigned __int16 v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  unsigned __int16 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a2;
  v6 = *a1 >> 1;
  v9 = 0;
  if ( *a2 >= v6 )
    return v9;
  v10 = *((_QWORD *)a1 + 1);
  while ( 1 )
  {
    v11 = v4++;
    *a2 = v4;
    v9 = *(_WORD *)(v10 + 2 * v11);
    v14 = v9;
    if ( v9 <= 0x20u )
      goto LABEL_10;
    if ( v9 >= 0x7Fu )
    {
      if ( !a4 || !(unsigned __int8)RtlIsValidOemCharacter(&v14) )
        goto LABEL_10;
      v9 = v14;
    }
    if ( v9 != 46 )
      break;
    if ( !a3 )
      goto LABEL_13;
LABEL_10:
    v9 = 0;
    if ( v4 >= v6 )
      return v9;
  }
  if ( v9 >= 0x80u )
    goto LABEL_15;
LABEL_13:
  v12 = RtlFatIllegalTable[(unsigned __int64)v9 >> 5];
  if ( _bittest(&v12, v9 & 0x1F) )
    v9 = 95;
LABEL_15:
  if ( (unsigned __int16)(v9 - 97) <= 0x19u )
    v9 -= 32;
  return v9;
}
