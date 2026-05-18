/*
 * XREFs of sub_1800D8A50 @ 0x1800D8A50
 * Callers:
 *     sub_1800D9D54 @ 0x1800D9D54 (sub_1800D9D54.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 */

__int64 __fastcall sub_1800D8A50(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = (_QWORD *)(a1 + 8);
  v4[3] = 0LL;
  sub_18000F444(v4, a2 + 8);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 152);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a2 + 168);
  *(_OWORD *)(a1 + 184) = *(_OWORD *)(a2 + 184);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a2 + 200);
  return a1;
}
