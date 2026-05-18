/*
 * XREFs of sub_1800E22E8 @ 0x1800E22E8
 * Callers:
 *     sub_18006C250 @ 0x18006C250 (sub_18006C250.c)
 *     sub_18012D05F @ 0x18012D05F (sub_18012D05F.c)
 *     sub_18012D072 @ 0x18012D072 (sub_18012D072.c)
 *     sub_18012D085 @ 0x18012D085 (sub_18012D085.c)
 * Callees:
 *     sub_18002BC94 @ 0x18002BC94 (sub_18002BC94.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127428 (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_1800E22E8(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 200);
  sub_18002BC94((__int64 ***)(a1 + 200), v4, **(__int64 ***)(a1 + 200), *(__int64 **)(a1 + 200));
  j_j__o_free(*v1);
  sub_18002BC94((__int64 ***)(a1 + 184), v4, **(__int64 ***)(a1 + 184), *(__int64 **)(a1 + 184));
  j_j__o_free(*(_QWORD *)(a1 + 184));
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 104));
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 24));
  return sub_1800E2A4C(a1);
}
