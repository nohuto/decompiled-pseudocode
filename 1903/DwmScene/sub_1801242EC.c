/*
 * XREFs of sub_1801242EC @ 0x1801242EC
 * Callers:
 *     sub_180124354 @ 0x180124354 (sub_180124354.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_180122EC0 @ 0x180122EC0 (sub_180122EC0.c)
 *     sub_1801244CC @ 0x1801244CC (sub_1801244CC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1801242EC(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 *a5, __int64 a6)
{
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  v6 = sub_180122EC0(a1, a2, a3);
  v7 = *a5;
  v6[4] = 0LL;
  v6[5] = 0LL;
  try
  {
    sub_18001110C(v6 + 2, v7);
    v8 = v6 + 6;
  }
  catch ( ... )
  {
    sub_180123370(a1, (__int64)v6, 1LL);
    throw;
  }
  sub_1801244CC(v8);
  return v6;
}
