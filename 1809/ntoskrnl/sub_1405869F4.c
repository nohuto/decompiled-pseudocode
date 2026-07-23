/*
 * XREFs of sub_1405869F4 @ 0x1405869F4
 * Callers:
 *     sub_140586FE0 @ 0x140586FE0 (sub_140586FE0.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140587E88 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     sub_140586A38 @ 0x140586A38 (sub_140586A38.c)
 */

void *__fastcall sub_1405869F4(char *a1)
{
  ((void (*)(void))sub_140586A38)();
  sub_140586A38(a1 + 40);
  sub_140586A38(a1 + 56);
  sub_140586A38(a1 + 72);
  return memset(a1, 0, 0x58uLL);
}
