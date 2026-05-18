/*
 * XREFs of sub_1800BD37C @ 0x1800BD37C
 * Callers:
 *     sub_1800BE040 @ 0x1800BE040 (sub_1800BE040.c)
 * Callees:
 *     sub_1800BD278 @ 0x1800BD278 (sub_1800BD278.c)
 *     _Mtx_destroy_in_situ @ 0x180127428 (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_1800BD37C(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 1552));
  sub_1800BD278((_QWORD *)(a1 + 1488));
  return sub_1800748FC(a1, v2);
}
