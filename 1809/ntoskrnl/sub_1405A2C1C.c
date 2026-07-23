/*
 * XREFs of sub_1405A2C1C @ 0x1405A2C1C
 * Callers:
 *     sub_1405A2BD4 @ 0x1405A2BD4 (sub_1405A2BD4.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     sub_14069AA40 @ 0x14069AA40 (sub_14069AA40.c)
 *     sub_14069AB20 @ 0x14069AB20 (sub_14069AB20.c)
 *     sub_14069C480 @ 0x14069C480 (sub_14069C480.c)
 *     sub_14069C760 @ 0x14069C760 (sub_14069C760.c)
 *     sub_14069CEF0 @ 0x14069CEF0 (sub_14069CEF0.c)
 *     sub_14069D150 @ 0x14069D150 (sub_14069D150.c)
 *     sub_14069D2C0 @ 0x14069D2C0 (sub_14069D2C0.c)
 *     sub_14069D330 @ 0x14069D330 (sub_14069D330.c)
 *     sub_14069E230 @ 0x14069E230 (sub_14069E230.c)
 *     sub_14069E2A0 @ 0x14069E2A0 (sub_14069E2A0.c)
 *     sub_1406A46B0 @ 0x1406A46B0 (sub_1406A46B0.c)
 *     sub_1406A4760 @ 0x1406A4760 (sub_1406A4760.c)
 *     sub_1406A48F0 @ 0x1406A48F0 (sub_1406A48F0.c)
 *     sub_1406A4F70 @ 0x1406A4F70 (sub_1406A4F70.c)
 *     sub_1406A4FA0 @ 0x1406A4FA0 (sub_1406A4FA0.c)
 *     sub_1406A5120 @ 0x1406A5120 (sub_1406A5120.c)
 *     sub_1406A5980 @ 0x1406A5980 (sub_1406A5980.c)
 *     sub_1406A5A20 @ 0x1406A5A20 (sub_1406A5A20.c)
 *     sub_1406A5B30 @ 0x1406A5B30 (sub_1406A5B30.c)
 *     sub_1406ABC60 @ 0x1406ABC60 (sub_1406ABC60.c)
 *     sub_1406ACEB0 @ 0x1406ACEB0 (sub_1406ACEB0.c)
 *     sub_1406ADD80 @ 0x1406ADD80 (sub_1406ADD80.c)
 *     sub_1406AF390 @ 0x1406AF390 (sub_1406AF390.c)
 *     sub_1406AF5E0 @ 0x1406AF5E0 (sub_1406AF5E0.c)
 *     sub_1406B5AC0 @ 0x1406B5AC0 (sub_1406B5AC0.c)
 *     sub_1406BFF80 @ 0x1406BFF80 (sub_1406BFF80.c)
 *     sub_1406C0030 @ 0x1406C0030 (sub_1406C0030.c)
 *     sub_1406C2350 @ 0x1406C2350 (sub_1406C2350.c)
 *     sub_1406CAAD0 @ 0x1406CAAD0 (sub_1406CAAD0.c)
 *     sub_1408E6680 @ 0x1408E6680 (sub_1408E6680.c)
 */

__int64 __fastcall sub_1405A2C1C(unsigned __int64 *a1)
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
  v2 = (unsigned __int8 *)&unk_14096EB1E;
  v3 = (unsigned __int8 *)&unk_14096EAFE;
  v19 = qword_14096E2B0;
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
      v17 = funcs_1405A2DA1[v9](v5 + 1, *(v3 - 2), *(v3 - 1), *v3, v3[1], (__int64)&v19, v7);
      v7 = v18;
      v8 = v17 ^ v20;
      LODWORD(v20) = v17 ^ v20;
    }
    if ( *v2 < 0x1Fu )
    {
      v16 = funcs_1405A2DA1[*v2](v5, *(v3 - 6), *(v3 - 5), *(v3 - 4), *(v3 - 3), (__int64)&v19, v8);
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
