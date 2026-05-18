/*
 * XREFs of sub_1800E05C0 @ 0x1800E05C0
 * Callers:
 *     sub_1800E0A60 @ 0x1800E0A60 (sub_1800E0A60.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800E05C0(__int64 a1)
{
  __int128 v1; // xmm0

  v1 = *(_OWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 56) = 1;
  *(_OWORD *)(a1 + 8) = v1;
}
