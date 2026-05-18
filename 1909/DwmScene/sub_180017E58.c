/*
 * XREFs of sub_180017E58 @ 0x180017E58
 * Callers:
 *     sub_1800190D0 @ 0x1800190D0 (sub_1800190D0.c)
 *     sub_180084480 @ 0x180084480 (sub_180084480.c)
 *     sub_180087390 @ 0x180087390 (sub_180087390.c)
 *     sub_1800AEB74 @ 0x1800AEB74 (sub_1800AEB74.c)
 *     sub_1800B19E0 @ 0x1800B19E0 (sub_1800B19E0.c)
 *     sub_1800B2184 @ 0x1800B2184 (sub_1800B2184.c)
 *     sub_1800B225C @ 0x1800B225C (sub_1800B225C.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 *     sub_1801008C0 @ 0x1801008C0 (sub_1801008C0.c)
 * Callees:
 *     sub_18001102C @ 0x18001102C (sub_18001102C.c)
 *     sub_18001B674 @ 0x18001B674 (sub_18001B674.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180017E58(__int64 a1, _OWORD *a2, _OWORD *a3)
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
  sub_18001B674(a1, v11);
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
  sub_18001102C((_OWORD *)a1, *(double *)&v4, *(double *)&v5, *(double *)&v6);
  return a1;
}
