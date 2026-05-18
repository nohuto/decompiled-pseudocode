/*
 * XREFs of sub_1800A9034 @ 0x1800A9034
 * Callers:
 *     sub_1800A9714 @ 0x1800A9714 (sub_1800A9714.c)
 * Callees:
 *     sub_1800636F4 @ 0x1800636F4 (sub_1800636F4.c)
 *     sub_180063780 @ 0x180063780 (sub_180063780.c)
 *     sub_1800A646C @ 0x1800A646C (sub_1800A646C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800A9034(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi

  v3 = a1 + 472;
  sub_1800636F4(a1 + 472);
  sub_1800A646C(a2);
  sub_180063780(v3);
  return a2;
}
