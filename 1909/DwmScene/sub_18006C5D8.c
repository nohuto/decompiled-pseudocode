/*
 * XREFs of sub_18006C5D8 @ 0x18006C5D8
 * Callers:
 *     sub_18012D149 @ 0x18012D149 (sub_18012D149.c)
 * Callees:
 *     sub_18006E354 @ 0x18006E354 (sub_18006E354.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127538 (_Mtx_destroy_in_situ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006C5D8(_QWORD *a1)
{
  _BYTE v3[16]; // [rsp+28h] [rbp-10h] BYREF

  Mtx_destroy_in_situ((_Mtx_t)(a1 + 2));
  sub_18006E354(a1, v3, *(_QWORD *)*a1);
  return j_j__o_free(*a1);
}
