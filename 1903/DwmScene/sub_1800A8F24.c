/*
 * XREFs of sub_1800A8F24 @ 0x1800A8F24
 * Callers:
 *     sub_1800A9604 @ 0x1800A9604 (sub_1800A9604.c)
 * Callees:
 *     sub_1800635E4 @ 0x1800635E4 (sub_1800635E4.c)
 *     sub_180063670 @ 0x180063670 (sub_180063670.c)
 *     sub_1800A635C @ 0x1800A635C (sub_1800A635C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800A8F24(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi

  v3 = a1 + 472;
  sub_1800635E4(a1 + 472);
  sub_1800A635C(a2);
  sub_180063670(v3);
  return a2;
}
