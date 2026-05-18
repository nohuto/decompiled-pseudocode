/*
 * XREFs of sub_180122090 @ 0x180122090
 * Callers:
 *     sub_180122280 @ 0x180122280 (sub_180122280.c)
 * Callees:
 *     sub_18006E354 @ 0x18006E354 (sub_18006E354.c)
 *     sub_1801236DC @ 0x1801236DC (sub_1801236DC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127538 (_Mtx_destroy_in_situ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180122090(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = -2LL;
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  v2 = (_QWORD *)(a1 + 240);
  sub_18006E354((_QWORD **)(a1 + 240), v4, **(_QWORD ***)(a1 + 240), *(_QWORD **)(a1 + 240));
  j_j__o_free(*v2);
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 160));
  sub_1801236DC(a1 + 144, v4, **(_QWORD **)(a1 + 144));
  j_j__o_free(*(_QWORD *)(a1 + 144));
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 64));
  return sub_180123AF0(a1);
}
