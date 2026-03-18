/*
 * XREFs of sub_1406EF0EC @ 0x1406EF0EC
 * Callers:
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140621DB4 (ExpHwidSysVolIfGetDiskInfo.c)
 *     sub_140622710 @ 0x140622710 (sub_140622710.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     sub_1406EF130 @ 0x1406EF130 (sub_1406EF130.c)
 */

__int64 __fastcall sub_1406EF0EC(char *a1)
{
  memset(a1, 0, 0x58uLL);
  sub_1406EF130(a1);
  sub_1406EF130(a1 + 40);
  sub_1406EF130(a1 + 56);
  return sub_1406EF130(a1 + 72);
}
