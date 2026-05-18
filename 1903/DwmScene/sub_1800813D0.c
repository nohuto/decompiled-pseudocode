/*
 * XREFs of sub_1800813D0 @ 0x1800813D0
 * Callers:
 *     sub_180084A14 @ 0x180084A14 (sub_180084A14.c)
 *     sub_18010C688 @ 0x18010C688 (sub_18010C688.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800813D0(__int64 a1, int *a2, __int128 *a3, __int128 *a4, _OWORD *a5)
{
  __int128 v5; // xmm3
  int v6; // xmm2_4
  int v7; // xmm1_4
  int v8; // xmm0_4
  __int128 v9; // xmm7
  int v10; // eax
  __int64 result; // rax

  v5 = *a3;
  v6 = a2[3];
  v7 = a2[2];
  v8 = a2[1];
  v9 = *a4;
  v10 = *a2;
  *(_OWORD *)(a1 + 48) = *a5;
  *(_DWORD *)a1 = v10;
  result = a1;
  *(_OWORD *)(a1 + 32) = v9;
  *(_DWORD *)(a1 + 4) = v8;
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 12) = v6;
  *(_OWORD *)(a1 + 16) = v5;
  return result;
}
