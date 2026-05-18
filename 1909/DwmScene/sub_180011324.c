/*
 * XREFs of sub_180011324 @ 0x180011324
 * Callers:
 *     sub_18000FB5C @ 0x18000FB5C (sub_18000FB5C.c)
 *     sub_18003FF20 @ 0x18003FF20 (sub_18003FF20.c)
 *     sub_1800BB128 @ 0x1800BB128 (sub_1800BB128.c)
 *     sub_1800E9EB4 @ 0x1800E9EB4 (sub_1800E9EB4.c)
 * Callees:
 *     sub_18000F60C @ 0x18000F60C (sub_18000F60C.c)
 */

__int64 __fastcall sub_180011324(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // r11
  _QWORD *v7; // r10
  __int64 v8; // rdx

  v4 = (a1[1] - *a1) >> 4;
  v5 = sub_18000F60C((__int64)a1, a2);
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
  return sub_1800110A4(a1, (__int64)v5, v4, a2);
}
