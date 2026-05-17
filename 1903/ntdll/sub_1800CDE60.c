/*
 * XREFs of sub_1800CDE60 @ 0x1800CDE60
 * Callers:
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_1800CDC50 @ 0x1800CDC50 (sub_1800CDC50.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180019FB0 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 *     sub_1800CD8F0 @ 0x1800CD8F0 (sub_1800CD8F0.c)
 */

__int64 __fastcall sub_1800CDE60(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5, _QWORD *a6, __int64 a7)
{
  unsigned int v7; // edi
  const void **v9; // rsi
  char v11; // al
  const void **v12; // rcx
  _QWORD *i; // rbx

  v7 = 0;
  v9 = (const void **)a2;
  *a6 = 0LL;
  if ( (a4 & 0x20) != 0 )
  {
    if ( RtlEqualUnicodeString(word_180119270, a2, 1) )
    {
      if ( a5 == a1[15] || a5 == a1[16] )
        v9 = (const void **)&unk_1801192B0;
    }
    else
    {
      v11 = RtlPrefixUnicodeString(L"\b\n", (__int64)v9, 1);
      v12 = (const void **)&unk_1801192B0;
      if ( !v11 )
        v12 = v9;
      v9 = v12;
    }
  }
  for ( i = (_QWORD *)a1[12]; ; i = (_QWORD *)*i )
  {
    if ( i == a1 + 12 )
      return (unsigned int)sub_1800CD8F0(a1, v9, a4, 8, a3, a5, a6, a7);
    if ( RtlEqualUnicodeString((unsigned __int16 *)v9, i[22], 1) )
      break;
  }
  *a6 = i;
  return v7;
}
