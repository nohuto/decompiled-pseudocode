/*
 * XREFs of sub_1406A3768 @ 0x1406A3768
 * Callers:
 *     sub_1406A3720 @ 0x1406A3720 (sub_1406A3720.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     sub_1406BCFD0 @ 0x1406BCFD0 (sub_1406BCFD0.c)
 *     sub_1406BD0C0 @ 0x1406BD0C0 (sub_1406BD0C0.c)
 *     sub_1406BD780 @ 0x1406BD780 (sub_1406BD780.c)
 *     sub_1406BDFC0 @ 0x1406BDFC0 (sub_1406BDFC0.c)
 *     sub_1406BE400 @ 0x1406BE400 (sub_1406BE400.c)
 *     sub_1406BE710 @ 0x1406BE710 (sub_1406BE710.c)
 *     sub_1406BEB00 @ 0x1406BEB00 (sub_1406BEB00.c)
 *     sub_1406BEDE0 @ 0x1406BEDE0 (sub_1406BEDE0.c)
 *     sub_1406BEE60 @ 0x1406BEE60 (sub_1406BEE60.c)
 *     sub_1406BEEE0 @ 0x1406BEEE0 (sub_1406BEEE0.c)
 *     sub_1406C4410 @ 0x1406C4410 (sub_1406C4410.c)
 *     sub_1406C4440 @ 0x1406C4440 (sub_1406C4440.c)
 *     sub_1406C4580 @ 0x1406C4580 (sub_1406C4580.c)
 *     sub_1406C4630 @ 0x1406C4630 (sub_1406C4630.c)
 *     sub_1406C48E0 @ 0x1406C48E0 (sub_1406C48E0.c)
 *     sub_1406C5570 @ 0x1406C5570 (sub_1406C5570.c)
 *     sub_1406C5B00 @ 0x1406C5B00 (sub_1406C5B00.c)
 *     sub_1406C5BA0 @ 0x1406C5BA0 (sub_1406C5BA0.c)
 *     sub_1406C7B40 @ 0x1406C7B40 (sub_1406C7B40.c)
 *     sub_1406CC6B0 @ 0x1406CC6B0 (sub_1406CC6B0.c)
 *     sub_1406CC920 @ 0x1406CC920 (sub_1406CC920.c)
 *     sub_1406CCB50 @ 0x1406CCB50 (sub_1406CCB50.c)
 *     sub_1406CD570 @ 0x1406CD570 (sub_1406CD570.c)
 *     sub_1406D46D0 @ 0x1406D46D0 (sub_1406D46D0.c)
 *     sub_1406D7BB0 @ 0x1406D7BB0 (sub_1406D7BB0.c)
 *     sub_1406E0D20 @ 0x1406E0D20 (sub_1406E0D20.c)
 *     sub_1406E0DD0 @ 0x1406E0DD0 (sub_1406E0DD0.c)
 *     sub_1406E2AD0 @ 0x1406E2AD0 (sub_1406E2AD0.c)
 *     sub_1406EA740 @ 0x1406EA740 (sub_1406EA740.c)
 *     sub_140920DE0 @ 0x140920DE0 (sub_140920DE0.c)
 */

__int64 __fastcall sub_1406A3768(__int64 *a1)
{
  unsigned __int8 *v1; // rdi
  unsigned __int8 *v2; // rbx
  __int64 v3; // rsi
  __int64 v5; // r14
  int v6; // r11d
  int v7; // r10d
  unsigned __int8 v8; // al
  int v9; // r10d
  int v10; // r11d
  int v11; // r10d
  int v12; // r11d
  int v13; // r10d
  __int64 result; // rax
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_1409ADBCE;
  v2 = (unsigned __int8 *)&unk_1409ADBAE;
  v19 = *a1;
  v3 = 30LL;
  v5 = 16LL;
  v18 = qword_1409AD340;
  v6 = BYTE3(v19) | ((BYTE2(v19) | ((BYTE1(v19) | ((unsigned __int8)v19 << 8)) << 8)) << 8);
  v17 = v6;
  v7 = HIBYTE(v19) | ((BYTE6(v19) | ((BYTE5(v19) | (BYTE4(v19) << 8)) << 8)) << 8);
  LODWORD(v19) = v7;
  do
  {
    v8 = v1[1];
    if ( v8 < 0x1Fu )
    {
      v16 = funcs_14064AAAA[v8](v3 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v18, v6);
      v6 = v17;
      v7 = v16 ^ v19;
      LODWORD(v19) = v16 ^ v19;
    }
    if ( *v1 < 0x1Fu )
    {
      v15 = funcs_14064AAAA[*v1](v3, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v18, v7);
      v7 = v19;
      v6 = v15 ^ v17;
      v17 ^= v15;
    }
    v3 -= 2LL;
    v1 -= 2;
    v2 -= 8;
    --v5;
  }
  while ( v5 );
  v9 = ~v7;
  BYTE3(v19) = v6;
  v10 = __ROR4__(v6, 8);
  HIBYTE(v19) = v9;
  v11 = __ROR4__(v9, 8);
  BYTE2(v19) = v10;
  v12 = __ROR4__(v10, 8);
  BYTE6(v19) = v11;
  v13 = __ROR4__(v11, 8);
  BYTE1(v19) = v12;
  BYTE5(v19) = v13;
  BYTE4(v19) = __ROR4__(v13, 8);
  LOBYTE(v19) = __ROR4__(v12, 8);
  result = v19;
  *a1 = v19;
  return result;
}
