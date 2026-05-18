/*
 * XREFs of sub_1800A9F4C @ 0x1800A9F4C
 * Callers:
 *     sub_1800A69D0 @ 0x1800A69D0 (sub_1800A69D0.c)
 *     sub_18012FACE @ 0x18012FACE (sub_18012FACE.c)
 *     sub_18012FAF2 @ 0x18012FAF2 (sub_18012FAF2.c)
 * Callees:
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 *     sub_180074638 @ 0x180074638 (sub_180074638.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A9F4C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 *v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a2 + 56);
  sub_180026530((__int64 ***)(a2 + 56), &v5, **(__int64 ***)(a2 + 56), *(__int64 **)(a2 + 56));
  j_j__o_free(*v2);
  sub_180074638(a2 + 40);
  return j_j__o_free(a2);
}
