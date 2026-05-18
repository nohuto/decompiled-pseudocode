/*
 * XREFs of sub_1800112D4 @ 0x1800112D4
 * Callers:
 *     sub_18000FB0C @ 0x18000FB0C (sub_18000FB0C.c)
 *     sub_18003FE10 @ 0x18003FE10 (sub_18003FE10.c)
 *     sub_1800BB018 @ 0x1800BB018 (sub_1800BB018.c)
 *     sub_1800E9DA4 @ 0x1800E9DA4 (sub_1800E9DA4.c)
 * Callees:
 *     sub_18000F5BC @ 0x18000F5BC (sub_18000F5BC.c)
 */

__int64 __fastcall sub_1800112D4(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // r11
  _QWORD *v7; // r10
  __int64 v8; // rdx

  v4 = (a1[1] - *a1) >> 4;
  v5 = sub_18000F5BC((__int64)a1, a2);
  v6 = (_QWORD *)a1[1];
  if ( (_QWORD *)*a1 != v6 )
  {
    v7 = v5;
    v8 = *a1 - (_QWORD)v5;
    do
    {
      *v7 = 0LL;
      v7[1] = 0LL;
      *v7 = *(_QWORD *)((char *)v7 + v8);
      v7[1] = *(_QWORD *)((char *)v7 + v8 + 8);
      *(_QWORD *)((char *)v7 + v8) = 0LL;
      *(_QWORD *)((char *)v7 + v8 + 8) = 0LL;
      v7 += 2;
    }
    while ( (_QWORD *)((char *)v7 + v8) != v6 );
  }
  return sub_180011054(a1, (__int64)v5, v4, a2);
}
