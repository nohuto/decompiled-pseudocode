/*
 * XREFs of sub_18006C4C8 @ 0x18006C4C8
 * Callers:
 *     sub_18012D039 @ 0x18012D039 (sub_18012D039.c)
 * Callees:
 *     sub_18006E244 @ 0x18006E244 (sub_18006E244.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127428 (_Mtx_destroy_in_situ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006C4C8(_QWORD *a1)
{
  _BYTE v3[16]; // [rsp+28h] [rbp-10h] BYREF

  Mtx_destroy_in_situ((_Mtx_t)(a1 + 2));
  sub_18006E244(a1, v3, *(_QWORD *)*a1);
  return j_j__o_free(*a1);
}
