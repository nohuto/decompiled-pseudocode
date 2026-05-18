/*
 * XREFs of sub_180066DA4 @ 0x180066DA4
 * Callers:
 *     sub_180065F80 @ 0x180065F80 (sub_180065F80.c)
 *     sub_1800666CC @ 0x1800666CC (sub_1800666CC.c)
 *     sub_180067B38 @ 0x180067B38 (sub_180067B38.c)
 * Callees:
 *     sub_18006934C @ 0x18006934C (sub_18006934C.c)
 */

__int64 __fastcall sub_180066DA4(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = (__int64 *)(a1 + 136);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v5 = sub_18006934C(a1 + 136);
  *v2 = v5;
  *v2 = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a2 + 136) = v5;
  v6 = v2[1];
  v2[1] = *(_QWORD *)(a2 + 144);
  result = a1;
  *(_QWORD *)(a2 + 144) = v6;
  return result;
}
