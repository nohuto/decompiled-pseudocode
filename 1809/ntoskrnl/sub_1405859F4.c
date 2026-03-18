/*
 * XREFs of sub_1405859F4 @ 0x1405859F4
 * Callers:
 *     sub_140585FE0 @ 0x140585FE0 (sub_140585FE0.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140586E88 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     sub_140585A38 @ 0x140585A38 (sub_140585A38.c)
 */

void *__fastcall sub_1405859F4(char *a1)
{
  ((void (*)(void))sub_140585A38)();
  sub_140585A38(a1 + 40);
  sub_140585A38(a1 + 56);
  sub_140585A38(a1 + 72);
  return memset(a1, 0, 0x58uLL);
}
