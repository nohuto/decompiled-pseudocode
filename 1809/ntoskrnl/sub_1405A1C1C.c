/*
 * XREFs of sub_1405A1C1C @ 0x1405A1C1C
 * Callers:
 *     sub_1405A1BD4 @ 0x1405A1BD4 (sub_1405A1BD4.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     sub_1406998A0 @ 0x1406998A0 (sub_1406998A0.c)
 *     sub_140699980 @ 0x140699980 (sub_140699980.c)
 *     sub_14069B2E0 @ 0x14069B2E0 (sub_14069B2E0.c)
 *     sub_14069B5C0 @ 0x14069B5C0 (sub_14069B5C0.c)
 *     sub_14069BD50 @ 0x14069BD50 (sub_14069BD50.c)
 *     sub_14069BFB0 @ 0x14069BFB0 (sub_14069BFB0.c)
 *     sub_14069C120 @ 0x14069C120 (sub_14069C120.c)
 *     sub_14069C190 @ 0x14069C190 (sub_14069C190.c)
 *     sub_14069D090 @ 0x14069D090 (sub_14069D090.c)
 *     sub_14069D100 @ 0x14069D100 (sub_14069D100.c)
 *     sub_1406A3430 @ 0x1406A3430 (sub_1406A3430.c)
 *     sub_1406A34E0 @ 0x1406A34E0 (sub_1406A34E0.c)
 *     sub_1406A3670 @ 0x1406A3670 (sub_1406A3670.c)
 *     sub_1406A3CF0 @ 0x1406A3CF0 (sub_1406A3CF0.c)
 *     sub_1406A3D20 @ 0x1406A3D20 (sub_1406A3D20.c)
 *     sub_1406A3EA0 @ 0x1406A3EA0 (sub_1406A3EA0.c)
 *     sub_1406A4700 @ 0x1406A4700 (sub_1406A4700.c)
 *     sub_1406A47A0 @ 0x1406A47A0 (sub_1406A47A0.c)
 *     sub_1406A48B0 @ 0x1406A48B0 (sub_1406A48B0.c)
 *     sub_1406AA9E0 @ 0x1406AA9E0 (sub_1406AA9E0.c)
 *     sub_1406ABC30 @ 0x1406ABC30 (sub_1406ABC30.c)
 *     sub_1406ACB00 @ 0x1406ACB00 (sub_1406ACB00.c)
 *     sub_1406AE110 @ 0x1406AE110 (sub_1406AE110.c)
 *     sub_1406AE360 @ 0x1406AE360 (sub_1406AE360.c)
 *     sub_1406B4840 @ 0x1406B4840 (sub_1406B4840.c)
 *     sub_1406BED00 @ 0x1406BED00 (sub_1406BED00.c)
 *     sub_1406BEDB0 @ 0x1406BEDB0 (sub_1406BEDB0.c)
 *     sub_1406C10D0 @ 0x1406C10D0 (sub_1406C10D0.c)
 *     sub_1406C9850 @ 0x1406C9850 (sub_1406C9850.c)
 *     sub_1408E53E0 @ 0x1408E53E0 (sub_1408E53E0.c)
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
