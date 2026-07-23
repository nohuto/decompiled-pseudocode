/*
 * XREFs of NormBuffer__AppendEx @ 0x180083DD8
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180083C60 (Normalization__NormalizeCharacter.c)
 *     NormBuffer__AppendAndSortDecomposed @ 0x1800FBE58 (NormBuffer__AppendAndSortDecomposed.c)
 * Callees:
 *     NormBuffer__Append @ 0x180083E24 (NormBuffer__Append.c)
 */

char __fastcall NormBuffer__AppendEx(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // rcx
  int v7; // r11d
  __int64 v8; // rax
  char result; // al

  if ( !(unsigned __int8)NormBuffer__Append(a1, a2) )
    return 0;
  v8 = *(_QWORD *)(v6 + 40) - 2LL;
  *(_DWORD *)(v6 + 56) = v7;
  *(_QWORD *)(v6 + 64) = v8;
  result = 1;
  *(_BYTE *)(v6 + 72) = a3;
  *(_BYTE *)(v6 + 73) = a4;
  return result;
}
