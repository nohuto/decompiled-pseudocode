/*
 * XREFs of sub_140586960 @ 0x140586960
 * Callers:
 *     sub_140586FE0 @ 0x140586FE0 (sub_140586FE0.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140587E88 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     sub_1405869A4 @ 0x1405869A4 (sub_1405869A4.c)
 */

__int64 __fastcall sub_140586960(char *a1)
{
  memset(a1, 0, 0x58uLL);
  sub_1405869A4(a1);
  sub_1405869A4(a1 + 40);
  sub_1405869A4(a1 + 56);
  return sub_1405869A4(a1 + 72);
}
