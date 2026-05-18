/*
 * XREFs of sub_180018D98 @ 0x180018D98
 * Callers:
 *     sub_1800190D0 @ 0x1800190D0 (sub_1800190D0.c)
 *     sub_1800848F4 @ 0x1800848F4 (sub_1800848F4.c)
 *     sub_1800866D4 @ 0x1800866D4 (sub_1800866D4.c)
 *     sub_1800B1D20 @ 0x1800B1D20 (sub_1800B1D20.c)
 *     sub_1800B1F80 @ 0x1800B1F80 (sub_1800B1F80.c)
 *     sub_1800B225C @ 0x1800B225C (sub_1800B225C.c)
 * Callees:
 *     sub_18001102C @ 0x18001102C (sub_18001102C.c)
 *     sub_18001B374 @ 0x18001B374 (sub_18001B374.c)
 */

__int64 __fastcall sub_180018D98(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x495u);
  v3 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  sub_18001B374(v7);
  sub_18001102C((_OWORD *)a2, *(double *)&v3, *(double *)&v4, *(double *)&v5);
  return a2;
}
