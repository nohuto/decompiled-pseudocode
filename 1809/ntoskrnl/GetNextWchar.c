/*
 * XREFs of GetNextWchar @ 0x14069E6EC
 * Callers:
 *     RtlGenerate8dot3Name @ 0x14069E320 (RtlGenerate8dot3Name.c)
 * Callees:
 *     RtlIsValidOemCharacter @ 0x140897D00 (RtlIsValidOemCharacter.c)
 */

__int64 __fastcall GetNextWchar(unsigned __int16 *a1, unsigned int *a2, char a3, char a4)
{
  unsigned int v4; // r11d
  unsigned int v6; // edi
  WCHAR v9; // r10
  __int64 v10; // rsi
  int v11; // eax
  WCHAR Char; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a2;
  v6 = *a1 >> 1;
  v9 = 0;
  if ( *a2 >= v6 )
    return v9;
  v10 = *((_QWORD *)a1 + 1);
  while ( 1 )
  {
    v9 = *(_WORD *)(v10 + 2LL * v4);
    *a2 = v4 + 1;
    Char = v9;
    if ( v9 <= 0x20u )
      goto LABEL_13;
    if ( v9 >= 0x7Fu )
    {
      if ( !a4 || !RtlIsValidOemCharacter(&Char) )
        goto LABEL_13;
      v9 = Char;
    }
    if ( v9 != 46 )
      break;
    if ( !a3 )
      goto LABEL_7;
LABEL_13:
    v4 = *a2;
    v9 = 0;
    if ( *a2 >= v6 )
      return v9;
  }
  if ( v9 >= 0x80u )
    goto LABEL_9;
LABEL_7:
  v11 = RtlFatIllegalTable[(unsigned __int64)v9 >> 5];
  if ( _bittest(&v11, v9 & 0x1F) )
    v9 = 95;
LABEL_9:
  if ( (unsigned __int16)(v9 - 97) <= 0x19u )
    v9 -= 32;
  return v9;
}
