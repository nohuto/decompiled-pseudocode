/*
 * XREFs of NormBuffer__Append @ 0x180083E24
 * Callers:
 *     Normalization__Normalize @ 0x180083B18 (Normalization__Normalize.c)
 *     Normalization__NormalizeCharacter @ 0x180083C60 (Normalization__NormalizeCharacter.c)
 *     NormBuffer__AppendEx @ 0x180083DD8 (NormBuffer__AppendEx.c)
 * Callees:
 *     <none>
 */

char __fastcall NormBuffer__Append(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  _WORD *v3; // rax
  _WORD *v5; // r9
  int v6; // kr00_4

  v2 = *(_QWORD *)(a1 + 32);
  if ( a2 >= 0x10000 )
  {
    v5 = *(_WORD **)(a1 + 40);
    if ( (unsigned __int64)v5 >= v2 )
      return 0;
    v6 = a2 - 0x10000;
    a2 = (a2 - 0x10000) >> 31;
    *v5 = __SPAIR64__(a2, v6) / 1024 - 10240;
    v3 = v5 + 1;
    *(_QWORD *)(a1 + 40) = v5 + 1;
    LOWORD(a2) = __SPAIR64__(a2, v6) % 1024 - 9216;
  }
  else
  {
    v3 = *(_WORD **)(a1 + 40);
  }
  if ( (unsigned __int64)v3 < v2 )
  {
    *v3 = a2;
    *(_QWORD *)(a1 + 40) = v3 + 1;
    return 1;
  }
  return 0;
}
