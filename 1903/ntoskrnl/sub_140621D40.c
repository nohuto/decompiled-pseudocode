/*
 * XREFs of sub_140621D40 @ 0x140621D40
 * Callers:
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140621DB4 (ExpHwidSysVolIfGetDiskInfo.c)
 *     sub_140622710 @ 0x140622710 (sub_140622710.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     sub_140621D84 @ 0x140621D84 (sub_140621D84.c)
 */

void *__fastcall sub_140621D40(char *a1)
{
  ((void (*)(void))sub_140621D84)();
  sub_140621D84(a1 + 40);
  sub_140621D84(a1 + 56);
  sub_140621D84(a1 + 72);
  return memset(a1, 0, 0x58uLL);
}
