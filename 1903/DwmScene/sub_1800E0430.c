/*
 * XREFs of sub_1800E0430 @ 0x1800E0430
 * Callers:
 *     sub_1800E0A60 @ 0x1800E0A60 (sub_1800E0A60.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800E0430(__int64 a1)
{
  __int128 v1; // xmm0
  __int64 v2; // xmm1_8

  v1 = *(_OWORD *)(a1 + 56);
  *(_BYTE *)(a1 + 80) = 1;
  v2 = *(_QWORD *)(a1 + 72);
  *(_OWORD *)(a1 + 8) = v1;
  *(_QWORD *)(a1 + 24) = v2;
}
