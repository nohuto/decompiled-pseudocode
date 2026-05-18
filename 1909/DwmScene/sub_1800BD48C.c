/*
 * XREFs of sub_1800BD48C @ 0x1800BD48C
 * Callers:
 *     sub_1800BE150 @ 0x1800BE150 (sub_1800BE150.c)
 * Callees:
 *     sub_1800BD388 @ 0x1800BD388 (sub_1800BD388.c)
 *     _Mtx_destroy_in_situ @ 0x180127538 (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_1800BD48C(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 1552));
  sub_1800BD388((_QWORD *)(a1 + 1488));
  return sub_180074A0C(a1, v2);
}
