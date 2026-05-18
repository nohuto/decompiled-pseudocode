/*
 * XREFs of sub_1800AC1F4 @ 0x1800AC1F4
 * Callers:
 *     sub_1800ADBF0 @ 0x1800ADBF0 (sub_1800ADBF0.c)
 * Callees:
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 */

_OWORD *__fastcall sub_1800AC1F4(_OWORD *a1, __int64 a2)
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
      sub_180081CAC(v6, (_OWORD *)((char *)v6 + a2 - (_QWORD)a1));
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
