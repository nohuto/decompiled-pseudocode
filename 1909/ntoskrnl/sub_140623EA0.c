/*
 * XREFs of sub_140623EA0 @ 0x140623EA0
 * Callers:
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140625C5C (ExpHwidSysVolIfGetDiskInfo.c)
 *     sub_1406265C0 @ 0x1406265C0 (sub_1406265C0.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     sub_140623EE4 @ 0x140623EE4 (sub_140623EE4.c)
 */

void *__fastcall sub_140623EA0(char *a1)
{
  ((void (*)(void))sub_140623EE4)();
  sub_140623EE4(a1 + 40);
  sub_140623EE4(a1 + 56);
  sub_140623EE4(a1 + 72);
  return memset(a1, 0, 0x58uLL);
}
