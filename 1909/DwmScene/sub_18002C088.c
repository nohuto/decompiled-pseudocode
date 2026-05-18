/*
 * XREFs of sub_18002C088 @ 0x18002C088
 * Callers:
 *     sub_180045920 @ 0x180045920 (sub_180045920.c)
 *     sub_180057878 @ 0x180057878 (sub_180057878.c)
 *     sub_18005E510 @ 0x18005E510 (sub_18005E510.c)
 *     sub_18006079C @ 0x18006079C (sub_18006079C.c)
 *     sub_180082948 @ 0x180082948 (sub_180082948.c)
 *     sub_18008A168 @ 0x18008A168 (sub_18008A168.c)
 *     sub_18008B3B0 @ 0x18008B3B0 (sub_18008B3B0.c)
 *     sub_1800A3178 @ 0x1800A3178 (sub_1800A3178.c)
 *     sub_1800A3820 @ 0x1800A3820 (sub_1800A3820.c)
 *     sub_1800A3CBC @ 0x1800A3CBC (sub_1800A3CBC.c)
 *     sub_1800A4298 @ 0x1800A4298 (sub_1800A4298.c)
 *     sub_1800A4524 @ 0x1800A4524 (sub_1800A4524.c)
 *     sub_1800A4D60 @ 0x1800A4D60 (sub_1800A4D60.c)
 *     sub_1800A9A84 @ 0x1800A9A84 (sub_1800A9A84.c)
 *     sub_1800F0C60 @ 0x1800F0C60 (sub_1800F0C60.c)
 *     sub_1800F1F44 @ 0x1800F1F44 (sub_1800F1F44.c)
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 *     sub_1800F2DBC @ 0x1800F2DBC (sub_1800F2DBC.c)
 *     sub_1800F31E8 @ 0x1800F31E8 (sub_1800F31E8.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

__int64 __fastcall sub_18002C088(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  unsigned __int64 v4; // r8
  _QWORD *v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a3[v4] );
  v6 = std::string::append(a2, a3, v4);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v6;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v6 + 1);
  v6[2] = 0LL;
  v6[3] = 15LL;
  *(_BYTE *)v6 = 0;
  return a1;
}
