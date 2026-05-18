/*
 * XREFs of sub_1800D85C8 @ 0x1800D85C8
 * Callers:
 *     sub_1800D884C @ 0x1800D884C (sub_1800D884C.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D85C8(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 48LL )
  {
    a3[2] = 0LL;
    a3[3] = 0LL;
    sub_18000F444(a3, i);
    a3[4] = *(_QWORD *)(i + 32);
    a3[5] = *(_QWORD *)(i + 40);
    a3 += 6;
  }
  return a3;
}
