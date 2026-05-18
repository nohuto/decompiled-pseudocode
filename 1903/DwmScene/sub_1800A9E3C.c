/*
 * XREFs of sub_1800A9E3C @ 0x1800A9E3C
 * Callers:
 *     sub_1800A68C0 @ 0x1800A68C0 (sub_1800A68C0.c)
 *     sub_18012F9BE @ 0x18012F9BE (sub_18012F9BE.c)
 *     sub_18012F9E2 @ 0x18012F9E2 (sub_18012F9E2.c)
 * Callees:
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_180074528 @ 0x180074528 (sub_180074528.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A9E3C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 *v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a2 + 56);
  sub_180026420((__int64 ***)(a2 + 56), &v5, **(__int64 ***)(a2 + 56), *(__int64 **)(a2 + 56));
  j_j__o_free(*v2);
  sub_180074528(a2 + 40);
  return j_j__o_free(a2);
}
