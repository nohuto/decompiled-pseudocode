/*
 * XREFs of sub_1800D84B8 @ 0x1800D84B8
 * Callers:
 *     sub_1800D873C @ 0x1800D873C (sub_1800D873C.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D84B8(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 48LL )
  {
    a3[2] = 0LL;
    a3[3] = 0LL;
    sub_18000F3F4(a3, i);
    a3[4] = *(_QWORD *)(i + 32);
    a3[5] = *(_QWORD *)(i + 40);
    a3 += 6;
  }
  return a3;
}
