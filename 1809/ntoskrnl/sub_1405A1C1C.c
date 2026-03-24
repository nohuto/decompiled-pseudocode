/*
 * XREFs of sub_1405A1C1C @ 0x1405A1C1C
 * Callers:
 *     sub_1405A1BD4 @ 0x1405A1BD4 (sub_1405A1BD4.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     sub_140699880 @ 0x140699880 (sub_140699880.c)
 *     sub_140699960 @ 0x140699960 (sub_140699960.c)
 *     sub_14069B2C0 @ 0x14069B2C0 (sub_14069B2C0.c)
 *     sub_14069B5A0 @ 0x14069B5A0 (sub_14069B5A0.c)
 *     sub_14069BD30 @ 0x14069BD30 (sub_14069BD30.c)
 *     sub_14069BF90 @ 0x14069BF90 (sub_14069BF90.c)
 *     sub_14069C100 @ 0x14069C100 (sub_14069C100.c)
 *     sub_14069C170 @ 0x14069C170 (sub_14069C170.c)
 *     sub_14069D070 @ 0x14069D070 (sub_14069D070.c)
 *     sub_14069D0E0 @ 0x14069D0E0 (sub_14069D0E0.c)
 *     sub_1406A3410 @ 0x1406A3410 (sub_1406A3410.c)
 *     sub_1406A34C0 @ 0x1406A34C0 (sub_1406A34C0.c)
 *     sub_1406A3650 @ 0x1406A3650 (sub_1406A3650.c)
 *     sub_1406A3CD0 @ 0x1406A3CD0 (sub_1406A3CD0.c)
 *     sub_1406A3D00 @ 0x1406A3D00 (sub_1406A3D00.c)
 *     sub_1406A3E80 @ 0x1406A3E80 (sub_1406A3E80.c)
 *     sub_1406A46E0 @ 0x1406A46E0 (sub_1406A46E0.c)
 *     sub_1406A4780 @ 0x1406A4780 (sub_1406A4780.c)
 *     sub_1406A4890 @ 0x1406A4890 (sub_1406A4890.c)
 *     sub_1406AA9C0 @ 0x1406AA9C0 (sub_1406AA9C0.c)
 *     sub_1406ABC10 @ 0x1406ABC10 (sub_1406ABC10.c)
 *     sub_1406ACAE0 @ 0x1406ACAE0 (sub_1406ACAE0.c)
 *     sub_1406AE0F0 @ 0x1406AE0F0 (sub_1406AE0F0.c)
 *     sub_1406AE340 @ 0x1406AE340 (sub_1406AE340.c)
 *     sub_1406B4820 @ 0x1406B4820 (sub_1406B4820.c)
 *     sub_1406BECE0 @ 0x1406BECE0 (sub_1406BECE0.c)
 *     sub_1406BED90 @ 0x1406BED90 (sub_1406BED90.c)
 *     sub_1406C10B0 @ 0x1406C10B0 (sub_1406C10B0.c)
 *     sub_1406C9830 @ 0x1406C9830 (sub_1406C9830.c)
 *     sub_1408E53C0 @ 0x1408E53C0 (sub_1408E53C0.c)
 */

__int64 __fastcall sub_1405A1C1C(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int8 *v2; // rdi
  unsigned __int8 *v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // r14
  int v7; // r11d
  int v8; // r10d
  unsigned __int8 v9; // al
  int v10; // r10d
  int v11; // r11d
  int v12; // r10d
  int v13; // r11d
  int v14; // r10d
  __int64 result; // rax
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+40h] [rbp-20h]
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]

  v1 = *a1;
  v2 = (unsigned __int8 *)&unk_14096DB1E;
  v3 = (unsigned __int8 *)&unk_14096DAFE;
  v19 = qword_14096D2B0;
  v5 = 30LL;
  v6 = 16LL;
  v7 = BYTE3(v1) | ((BYTE2(v1) | ((((unsigned __int8)v1 << 8) | BYTE1(v1)) << 8)) << 8);
  v18 = v7;
  v8 = HIBYTE(v1) | ((BYTE6(v1) | ((BYTE5(v1) | (BYTE4(v1) << 8)) << 8)) << 8);
  LODWORD(v20) = v8;
  do
  {
    v9 = v2[1];
    if ( v9 < 0x1Fu )
    {
      v17 = funcs_1405A1DA1[v9](v5 + 1, *(v3 - 2), *(v3 - 1), *v3, v3[1], (__int64)&v19, v7);
      v7 = v18;
      v8 = v17 ^ v20;
      LODWORD(v20) = v17 ^ v20;
    }
    if ( *v2 < 0x1Fu )
    {
      v16 = funcs_1405A1DA1[*v2](v5, *(v3 - 6), *(v3 - 5), *(v3 - 4), *(v3 - 3), (__int64)&v19, v8);
      v8 = v20;
      v7 = v16 ^ v18;
      v18 ^= v16;
    }
    v5 -= 2LL;
    v2 -= 2;
    v3 -= 8;
    --v6;
  }
  while ( v6 );
  v10 = ~v8;
  BYTE3(v20) = v7;
  v11 = __ROR4__(v7, 8);
  HIBYTE(v20) = v10;
  v12 = __ROR4__(v10, 8);
  BYTE2(v20) = v11;
  v13 = __ROR4__(v11, 8);
  BYTE6(v20) = v12;
  v14 = __ROR4__(v12, 8);
  BYTE1(v20) = v13;
  BYTE5(v20) = v14;
  BYTE4(v20) = __ROR4__(v14, 8);
  LOBYTE(v20) = __ROR4__(v13, 8);
  result = v20;
  *a1 = v20;
  return result;
}
