/*
 * XREFs of sub_18008468C @ 0x18008468C
 * Callers:
 *     sub_180111660 @ 0x180111660 (sub_180111660.c)
 * Callees:
 *     sub_18001102C @ 0x18001102C (sub_18001102C.c)
 *     sub_18001B374 @ 0x18001B374 (sub_18001B374.c)
 *     sub_180084480 @ 0x180084480 (sub_180084480.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18008468C(__int64 a1, __int64 a2)
{
  double v4; // xmm1_8
  double v5; // xmm2_8
  double v6; // xmm3_8
  __m128 v8; // [rsp+20h] [rbp-68h] BYREF
  __int128 v9; // [rsp+30h] [rbp-58h] BYREF
  __int128 v10; // [rsp+40h] [rbp-48h]
  __int128 v11; // [rsp+50h] [rbp-38h]
  __int128 v12; // [rsp+60h] [rbp-28h]

  sub_180087450(a1);
  sub_180084480(a1, &v9);
  v4 = *(double *)&v10;
  v5 = *(double *)&v11;
  v6 = *(double *)&v12;
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  sub_18001B374(&v8, v4, v5, v6);
  sub_18001102C((_OWORD *)a2, v4, v5, v6);
  return a2;
}
