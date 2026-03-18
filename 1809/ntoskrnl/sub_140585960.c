/*
 * XREFs of sub_140585960 @ 0x140585960
 * Callers:
 *     sub_140585FE0 @ 0x140585FE0 (sub_140585FE0.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140586E88 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     sub_1405859A4 @ 0x1405859A4 (sub_1405859A4.c)
 */

__int64 __fastcall sub_140585960(char *a1)
{
  memset(a1, 0, 0x58uLL);
  sub_1405859A4(a1);
  sub_1405859A4(a1 + 40);
  sub_1405859A4(a1 + 56);
  return sub_1405859A4(a1 + 72);
}
