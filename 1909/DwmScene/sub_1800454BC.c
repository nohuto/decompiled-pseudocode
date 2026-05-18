/*
 * XREFs of sub_1800454BC @ 0x1800454BC
 * Callers:
 *     sub_180045920 @ 0x180045920 (sub_180045920.c)
 *     sub_180057878 @ 0x180057878 (sub_180057878.c)
 *     sub_18005E510 @ 0x18005E510 (sub_18005E510.c)
 *     sub_18006079C @ 0x18006079C (sub_18006079C.c)
 *     sub_180082948 @ 0x180082948 (sub_180082948.c)
 *     sub_18008A168 @ 0x18008A168 (sub_18008A168.c)
 *     sub_18008B3B0 @ 0x18008B3B0 (sub_18008B3B0.c)
 *     sub_1800A4524 @ 0x1800A4524 (sub_1800A4524.c)
 *     sub_1800F1E34 @ 0x1800F1E34 (sub_1800F1E34.c)
 *     sub_1800F3078 @ 0x1800F3078 (sub_1800F3078.c)
 *     sub_1800F5930 @ 0x1800F5930 (sub_1800F5930.c)
 *     sub_1800F5A8C @ 0x1800F5A8C (sub_1800F5A8C.c)
 *     sub_1800F5F30 @ 0x1800F5F30 (sub_1800F5F30.c)
 *     sub_1800F61AC @ 0x1800F61AC (sub_1800F61AC.c)
 * Callees:
 *     sub_180056A54 @ 0x180056A54 (sub_180056A54.c)
 */

__int64 __fastcall sub_1800454BC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  v5 = sub_180056A54(a3, 0LL, a2);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 15LL;
  *(_BYTE *)v5 = 0;
  return a1;
}
