/*
 * XREFs of sub_1406ACDB8 @ 0x1406ACDB8
 * Callers:
 *     sub_1406ACD70 @ 0x1406ACD70 (sub_1406ACD70.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     sub_1406BD840 @ 0x1406BD840 (sub_1406BD840.c)
 *     sub_1406BD930 @ 0x1406BD930 (sub_1406BD930.c)
 *     sub_1406BDCD0 @ 0x1406BDCD0 (sub_1406BDCD0.c)
 *     sub_1406BE510 @ 0x1406BE510 (sub_1406BE510.c)
 *     sub_1406BE950 @ 0x1406BE950 (sub_1406BE950.c)
 *     sub_1406BEC60 @ 0x1406BEC60 (sub_1406BEC60.c)
 *     sub_1406BF050 @ 0x1406BF050 (sub_1406BF050.c)
 *     sub_1406BF330 @ 0x1406BF330 (sub_1406BF330.c)
 *     sub_1406BF3B0 @ 0x1406BF3B0 (sub_1406BF3B0.c)
 *     sub_1406BF430 @ 0x1406BF430 (sub_1406BF430.c)
 *     sub_1406C5250 @ 0x1406C5250 (sub_1406C5250.c)
 *     sub_1406C5280 @ 0x1406C5280 (sub_1406C5280.c)
 *     sub_1406C53C0 @ 0x1406C53C0 (sub_1406C53C0.c)
 *     sub_1406C5470 @ 0x1406C5470 (sub_1406C5470.c)
 *     sub_1406C5720 @ 0x1406C5720 (sub_1406C5720.c)
 *     sub_1406C6C90 @ 0x1406C6C90 (sub_1406C6C90.c)
 *     sub_1406C7220 @ 0x1406C7220 (sub_1406C7220.c)
 *     sub_1406C72C0 @ 0x1406C72C0 (sub_1406C72C0.c)
 *     sub_1406C92F0 @ 0x1406C92F0 (sub_1406C92F0.c)
 *     sub_1406CD880 @ 0x1406CD880 (sub_1406CD880.c)
 *     sub_1406CDB80 @ 0x1406CDB80 (sub_1406CDB80.c)
 *     sub_1406CDDB0 @ 0x1406CDDB0 (sub_1406CDDB0.c)
 *     sub_1406CE7D0 @ 0x1406CE7D0 (sub_1406CE7D0.c)
 *     sub_1406D4FF0 @ 0x1406D4FF0 (sub_1406D4FF0.c)
 *     sub_1406D7DD0 @ 0x1406D7DD0 (sub_1406D7DD0.c)
 *     sub_1406DFA10 @ 0x1406DFA10 (sub_1406DFA10.c)
 *     sub_1406DFAC0 @ 0x1406DFAC0 (sub_1406DFAC0.c)
 *     sub_1406E1450 @ 0x1406E1450 (sub_1406E1450.c)
 *     sub_1406E9320 @ 0x1406E9320 (sub_1406E9320.c)
 *     sub_140921380 @ 0x140921380 (sub_140921380.c)
 */

__int64 __fastcall sub_1406ACDB8(__int64 *a1)
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
      v16 = funcs_140684B3A[v8](v3 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v18, v6);
      v6 = v17;
      v7 = v16 ^ v19;
      LODWORD(v19) = v16 ^ v19;
    }
    if ( *v1 < 0x1Fu )
    {
      v15 = funcs_140684B3A[*v1](v3, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v18, v7);
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
