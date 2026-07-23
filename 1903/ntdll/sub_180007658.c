/*
 * XREFs of sub_180007658 @ 0x180007658
 * Callers:
 *     sub_180007520 @ 0x180007520 (sub_180007520.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180007658(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx
  char v5; // dl
  unsigned __int64 v6; // rcx
  signed __int64 v7; // rtt

  v1 = *a1;
  do
  {
    v3 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !*(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
    {
      do
      {
        v4 = v3;
        v3 = (_QWORD *)v3[2];
        v3[3] = v4;
      }
      while ( !v3[4] );
    }
    *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) + 32) = v3[4];
    v5 = v1 & 1;
    v6 = 0LL;
    if ( (v1 & 1) == 0 )
      v6 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
    v7 = v1;
    v1 = _InterlockedCompareExchange64(a1, v6, v1);
  }
  while ( v7 != v1 );
  if ( v5 )
    LODWORD(v1) = sub_180006358(v1);
  return v1;
}
