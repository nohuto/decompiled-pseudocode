/*
 * XREFs of sub_1800AC304 @ 0x1800AC304
 * Callers:
 *     sub_1800ADD00 @ 0x1800ADD00 (sub_1800ADD00.c)
 * Callees:
 *     sub_180081DBC @ 0x180081DBC (sub_180081DBC.c)
 */

_OWORD *__fastcall sub_1800AC304(_OWORD *a1, __int64 a2)
{
  _OWORD *v4; // rdi
  __int64 v5; // rbp
  _OWORD *v6; // rsi
  __int64 v7; // r15

  v4 = a1;
  v5 = 4LL;
  do
  {
    v6 = v4;
    v7 = 4LL;
    do
    {
      sub_180081DBC(v6, (_OWORD *)((char *)v6 + a2 - (_QWORD)a1));
      v6 += 4;
      --v7;
    }
    while ( v7 );
    v4 += 16;
    --v5;
  }
  while ( v5 );
  return a1;
}
