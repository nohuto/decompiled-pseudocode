/*
 * XREFs of sub_1800453AC @ 0x1800453AC
 * Callers:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     sub_180057768 @ 0x180057768 (sub_180057768.c)
 *     sub_18005E400 @ 0x18005E400 (sub_18005E400.c)
 *     sub_18006068C @ 0x18006068C (sub_18006068C.c)
 *     sub_180082838 @ 0x180082838 (sub_180082838.c)
 *     sub_18008A058 @ 0x18008A058 (sub_18008A058.c)
 *     sub_18008B2A0 @ 0x18008B2A0 (sub_18008B2A0.c)
 *     sub_1800A4414 @ 0x1800A4414 (sub_1800A4414.c)
 *     sub_1800F1D24 @ 0x1800F1D24 (sub_1800F1D24.c)
 *     sub_1800F2F68 @ 0x1800F2F68 (sub_1800F2F68.c)
 *     sub_1800F5820 @ 0x1800F5820 (sub_1800F5820.c)
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 *     sub_1800F5E20 @ 0x1800F5E20 (sub_1800F5E20.c)
 *     sub_1800F609C @ 0x1800F609C (sub_1800F609C.c)
 * Callees:
 *     sub_180056944 @ 0x180056944 (sub_180056944.c)
 */

__int64 __fastcall sub_1800453AC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  v5 = sub_180056944(a3, 0LL, a2);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 15LL;
  *(_BYTE *)v5 = 0;
  return a1;
}
