/*
 * XREFs of sub_18002BF78 @ 0x18002BF78
 * Callers:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     sub_180057768 @ 0x180057768 (sub_180057768.c)
 *     sub_18005E400 @ 0x18005E400 (sub_18005E400.c)
 *     sub_18006068C @ 0x18006068C (sub_18006068C.c)
 *     sub_180082838 @ 0x180082838 (sub_180082838.c)
 *     sub_18008A058 @ 0x18008A058 (sub_18008A058.c)
 *     sub_18008B2A0 @ 0x18008B2A0 (sub_18008B2A0.c)
 *     sub_1800A3068 @ 0x1800A3068 (sub_1800A3068.c)
 *     sub_1800A3710 @ 0x1800A3710 (sub_1800A3710.c)
 *     sub_1800A3BAC @ 0x1800A3BAC (sub_1800A3BAC.c)
 *     sub_1800A4188 @ 0x1800A4188 (sub_1800A4188.c)
 *     sub_1800A4414 @ 0x1800A4414 (sub_1800A4414.c)
 *     sub_1800A4C50 @ 0x1800A4C50 (sub_1800A4C50.c)
 *     sub_1800A9974 @ 0x1800A9974 (sub_1800A9974.c)
 *     sub_1800F0B50 @ 0x1800F0B50 (sub_1800F0B50.c)
 *     sub_1800F1E34 @ 0x1800F1E34 (sub_1800F1E34.c)
 *     sub_1800F2344 @ 0x1800F2344 (sub_1800F2344.c)
 *     sub_1800F2CAC @ 0x1800F2CAC (sub_1800F2CAC.c)
 *     sub_1800F30D8 @ 0x1800F30D8 (sub_1800F30D8.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

__int64 __fastcall sub_18002BF78(__int64 a1, _QWORD *a2, _BYTE *a3)
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
