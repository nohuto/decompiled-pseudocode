/*
 * XREFs of sub_180121F80 @ 0x180121F80
 * Callers:
 *     sub_180122170 @ 0x180122170 (sub_180122170.c)
 * Callees:
 *     sub_18006E244 @ 0x18006E244 (sub_18006E244.c)
 *     sub_1801235CC @ 0x1801235CC (sub_1801235CC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127428 (_Mtx_destroy_in_situ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180121F80(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = -2LL;
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  v2 = (_QWORD *)(a1 + 240);
  sub_18006E244((_QWORD **)(a1 + 240), v4, **(_QWORD ***)(a1 + 240), *(_QWORD **)(a1 + 240));
  j_j__o_free(*v2);
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 160));
  sub_1801235CC(a1 + 144, v4, **(_QWORD **)(a1 + 144));
  j_j__o_free(*(_QWORD *)(a1 + 144));
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 64));
  return sub_1801239E0(a1);
}
