/*
 * XREFs of sub_1800E2C80 @ 0x1800E2C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E2CD0 @ 0x1800E2CD0 (sub_1800E2CD0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800E2C80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_1800E2CD0(a1, a3, a4, a2, 1, -2LL);
  return a2;
}
