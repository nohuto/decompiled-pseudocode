/*
 * XREFs of sub_18006756C @ 0x18006756C
 * Callers:
 *     sub_18012CF41 @ 0x18012CF41 (sub_18012CF41.c)
 *     unknown_libname_47 @ 0x18012CF4D (unknown_libname_47.c)
 *     sub_180130D5A @ 0x180130D5A (sub_180130D5A.c)
 *     sub_180130D66 @ 0x180130D66 (sub_180130D66.c)
 * Callees:
 *     sub_180069F04 @ 0x180069F04 (sub_180069F04.c)
 */

__int64 __fastcall sub_18006756C(__int64 a1)
{
  _QWORD *v1; // rbx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 136);
  sub_180069F04(a1 + 136, v3, **(_QWORD **)(a1 + 136));
  return j_j__o_free(*v1);
}
