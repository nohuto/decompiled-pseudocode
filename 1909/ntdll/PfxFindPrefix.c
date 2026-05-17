/*
 * XREFs of PfxFindPrefix @ 0x1800E4790
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180064A00 (RtlSplay.c)
 *     CompareNamesCaseSensitive @ 0x1800E4584 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1800E4704 (ComputeNameLength.c)
 */

_QWORD *__fastcall PfxFindPrefix(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int16 v5; // ax
  _QWORD *i; // rsi
  _QWORD *v7; // r14
  int v8; // eax
  __int64 v10; // rbx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = a1;
  v5 = ComputeNameLength(a2);
  while ( *(__int16 *)(v2 + 2) > v5 )
  {
    v3 = v2;
    v2 = *(_QWORD *)(v2 + 8);
  }
LABEL_12:
  if ( *(__int16 *)(v2 + 2) <= 0 )
    return 0LL;
  for ( i = (_QWORD *)(v2 + 16); ; i = (_QWORD *)i[2] )
  {
    while ( 1 )
    {
      if ( !i )
      {
        v3 = v2;
        v2 = *(_QWORD *)(v2 + 8);
        goto LABEL_12;
      }
      v7 = i - 2;
      v8 = CompareNamesCaseSensitive((unsigned __int16 *)i[3], a2);
      if ( v8 != 3 )
        break;
      i = (_QWORD *)i[1];
    }
    if ( v8 )
      break;
  }
  if ( *(_WORD *)v7 == 514 )
  {
    v10 = *(_QWORD *)(v2 + 8);
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_WORD *)v2 = 514;
    v7 = RtlSplay(i) - 2;
    *(_WORD *)v7 = 513;
    *(_QWORD *)(v3 + 8) = v7;
    v7[1] = v10;
  }
  return v7;
}
