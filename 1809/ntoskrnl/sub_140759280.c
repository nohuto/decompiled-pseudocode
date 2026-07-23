/*
 * XREFs of sub_140759280 @ 0x140759280
 * Callers:
 *     sub_140759238 @ 0x140759238 (sub_140759238.c)
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

__int64 __fastcall sub_140759280(unsigned __int64 *a1)
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
  v2 = (unsigned __int8 *)&unk_14096EA82;
  v19 = qword_14096E2B0;
  v4 = ~(HIBYTE(v1) | ((BYTE6(v1) | ((BYTE5(v1) | (BYTE4(v1) << 8)) << 8)) << 8));
  v18 = v4;
  v5 = BYTE3(v1) | ((BYTE2(v1) | ((((unsigned __int8)v1 << 8) | BYTE1(v1)) << 8)) << 8);
  v6 = 0LL;
  LODWORD(v20) = v5;
  v7 = 0LL;
  v8 = 16LL;
  do
  {
    v9 = byte_14096EB00[v6];
    if ( v9 < 0x1Fu )
    {
      v16 = funcs_1405A2DA1[v9](v7, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v19, v4);
      v4 = v18;
      v5 = v16 ^ v20;
      LODWORD(v20) = v16 ^ v20;
    }
    v10 = v5;
    if ( byte_14096EB00[v6 + 1] < 0x1Fu )
    {
      v17 = funcs_1405A2DA1[(unsigned __int8)byte_14096EB00[v6 + 1]](
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
