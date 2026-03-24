/*
 * XREFs of sub_140758090 @ 0x140758090
 * Callers:
 *     sub_140758048 @ 0x140758048 (sub_140758048.c)
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

__int64 __fastcall sub_140758090(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int8 *v2; // rdi
  int v4; // r10d
  int v5; // r11d
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int8 v9; // al
  int v10; // ebx
  int v11; // ebx
  int v12; // r10d
  int v13; // ebx
  int v14; // r10d
  __int64 result; // rax
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+40h] [rbp-20h]
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]

  v1 = *a1;
  v2 = (unsigned __int8 *)&unk_14096DA82;
  v19 = qword_14096D2B0;
  v4 = ~(HIBYTE(v1) | ((BYTE6(v1) | ((BYTE5(v1) | (BYTE4(v1) << 8)) << 8)) << 8));
  v18 = v4;
  v5 = BYTE3(v1) | ((BYTE2(v1) | ((((unsigned __int8)v1 << 8) | BYTE1(v1)) << 8)) << 8);
  v6 = 0LL;
  LODWORD(v20) = v5;
  v7 = 0LL;
  v8 = 16LL;
  do
  {
    v9 = byte_14096DB00[v6];
    if ( v9 < 0x1Fu )
    {
      v16 = funcs_1405A1DA1[v9](v7, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v19, v4);
      v4 = v18;
      v5 = v16 ^ v20;
      LODWORD(v20) = v16 ^ v20;
    }
    v10 = v5;
    if ( byte_14096DB00[v6 + 1] < 0x1Fu )
    {
      v17 = funcs_1405A1DA1[(unsigned __int8)byte_14096DB00[v6 + 1]](
              v7 + 1,
              v2[2],
              v2[3],
              v2[4],
              v2[5],
              (__int64)&v19,
              v5);
      v5 = v20;
      v4 = v17 ^ v18;
      v18 ^= v17;
    }
    v7 += 2LL;
    v6 += 2LL;
    v2 += 8;
    --v8;
  }
  while ( v8 );
  BYTE3(v20) = v10;
  v11 = __ROR4__(v10, 8);
  HIBYTE(v20) = v4;
  BYTE2(v20) = v11;
  v12 = __ROR4__(v4, 8);
  v13 = __ROR4__(v11, 8);
  BYTE6(v20) = v12;
  BYTE1(v20) = v13;
  v14 = __ROR4__(v12, 8);
  BYTE5(v20) = v14;
  BYTE4(v20) = __ROR4__(v14, 8);
  LOBYTE(v20) = __ROR4__(v13, 8);
  result = v20;
  *a1 = v20;
  return result;
}
