/*
 * XREFs of sub_1800F93D4 @ 0x1800F93D4
 * Callers:
 *     sub_18010DCD0 @ 0x18010DCD0 (sub_18010DCD0.c)
 * Callees:
 *     sub_1800F8BC4 @ 0x1800F8BC4 (sub_1800F8BC4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F93D4(_QWORD *a1, __int64 a2)
{
  __int64 v3[4]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v4[6]; // [rsp+48h] [rbp-30h] BYREF

  v3[3] = 15LL;
  v3[2] = 0LL;
  LOBYTE(v3[0]) = 0;
  v4[3] = 15LL;
  v4[2] = 0LL;
  LOBYTE(v4[0]) = 0;
  return sub_1800F8BC4(a1, v4, a2, v3);
}
