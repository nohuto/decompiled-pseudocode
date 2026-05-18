/*
 * XREFs of sub_180017DE8 @ 0x180017DE8
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_180084370 @ 0x180084370 (sub_180084370.c)
 *     sub_180087280 @ 0x180087280 (sub_180087280.c)
 *     sub_1800AEA64 @ 0x1800AEA64 (sub_1800AEA64.c)
 *     sub_1800B18D0 @ 0x1800B18D0 (sub_1800B18D0.c)
 *     sub_1800B2074 @ 0x1800B2074 (sub_1800B2074.c)
 *     sub_1800B214C @ 0x1800B214C (sub_1800B214C.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1801007B0 @ 0x1801007B0 (sub_1801007B0.c)
 * Callees:
 *     sub_180010FDC @ 0x180010FDC (sub_180010FDC.c)
 *     sub_18001B564 @ 0x18001B564 (sub_18001B564.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180017DE8(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int128 v4; // xmm9
  __int128 v5; // xmm10
  __int128 v6; // xmm11
  __int128 v7; // xmm5
  __int128 v8; // xmm4
  __int128 v9; // xmm6
  _OWORD v11[4]; // [rsp+20h] [rbp-B8h] BYREF

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x495u);
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x495u);
  v7 = a3[2];
  v8 = a3[3];
  v9 = a3[1];
  v11[0] = *a3;
  v11[1] = v9;
  v11[2] = v7;
  v11[3] = v8;
  sub_18001B564(a1, v11);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  sub_180010FDC((_OWORD *)a1, *(double *)&v4, *(double *)&v5, *(double *)&v6);
  return a1;
}
