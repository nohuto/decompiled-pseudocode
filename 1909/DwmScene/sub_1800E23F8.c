/*
 * XREFs of sub_1800E23F8 @ 0x1800E23F8
 * Callers:
 *     sub_18006C360 @ 0x18006C360 (sub_18006C360.c)
 *     sub_18012D16F @ 0x18012D16F (sub_18012D16F.c)
 *     sub_18012D182 @ 0x18012D182 (sub_18012D182.c)
 *     sub_18012D195 @ 0x18012D195 (sub_18012D195.c)
 * Callees:
 *     sub_18002BDA4 @ 0x18002BDA4 (sub_18002BDA4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127538 (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_1800E23F8(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 200);
  sub_18002BDA4((__int64 ***)(a1 + 200), v4, **(__int64 ***)(a1 + 200), *(__int64 **)(a1 + 200));
  j_j__o_free(*v1);
  sub_18002BDA4((__int64 ***)(a1 + 184), v4, **(__int64 ***)(a1 + 184), *(__int64 **)(a1 + 184));
  j_j__o_free(*(_QWORD *)(a1 + 184));
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 104));
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 24));
  return sub_1800E2B5C(a1);
}
