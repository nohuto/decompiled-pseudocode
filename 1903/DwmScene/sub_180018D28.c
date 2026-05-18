/*
 * XREFs of sub_180018D28 @ 0x180018D28
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_1800847E4 @ 0x1800847E4 (sub_1800847E4.c)
 *     sub_1800865C4 @ 0x1800865C4 (sub_1800865C4.c)
 *     sub_1800B1C10 @ 0x1800B1C10 (sub_1800B1C10.c)
 *     sub_1800B1E70 @ 0x1800B1E70 (sub_1800B1E70.c)
 *     sub_1800B214C @ 0x1800B214C (sub_1800B214C.c)
 * Callees:
 *     sub_180010FDC @ 0x180010FDC (sub_180010FDC.c)
 *     sub_18001B264 @ 0x18001B264 (sub_18001B264.c)
 */

__int64 __fastcall sub_180018D28(_OWORD *a1, __int64 a2)
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
  sub_18001B264(v7);
  sub_180010FDC((_OWORD *)a2, *(double *)&v3, *(double *)&v4, *(double *)&v5);
  return a2;
}
