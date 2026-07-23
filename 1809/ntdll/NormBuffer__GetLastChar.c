/*
 * XREFs of NormBuffer__GetLastChar @ 0x1800FBF44
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180083C60 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NormBuffer__GetLastChar(__int64 a1)
{
  unsigned __int16 *v2; // r8
  unsigned int v4; // ecx
  signed int v5; // eax
  __int64 v6; // r9
  unsigned __int8 v7; // r10
  char v8; // cl
  char v9; // al
  char v10; // cl

  v2 = (unsigned __int16 *)(*(_QWORD *)(a1 + 40) - 2LL);
  if ( *(unsigned __int16 **)(a1 + 64) == v2 )
    return *(unsigned int *)(a1 + 56);
  *(_QWORD *)(a1 + 64) = v2;
  v4 = *v2;
  *(_DWORD *)(a1 + 56) = v4;
  v5 = v4;
  if ( v4 > 0xDC00 && v4 <= 0xDFFF )
  {
    v5 = v4 + ((*(v2 - 1) - 55287) << 10);
    *(_DWORD *)(a1 + 56) = v5;
  }
  v6 = *(_QWORD *)(a1 + 112);
  v7 = *(_BYTE *)(((__int64)v5 >> 7) + *(_QWORD *)(v6 + 32));
  if ( (unsigned __int8)(v7 - 1) > 0xF9u )
  {
    v9 = 0;
    v10 = 0;
  }
  else
  {
    v8 = *(_BYTE *)(*(_QWORD *)(v6 + 40) + ((unsigned __int64)v7 << 7) + (v5 & 0x7F) - 128);
    v9 = v8 & 0xC0;
    v10 = v8 & 0x3F;
  }
  *(_BYTE *)(a1 + 72) = v10;
  *(_BYTE *)(a1 + 73) = v9;
  return *(unsigned int *)(a1 + 56);
}
