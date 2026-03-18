/*
 * XREFs of sub_140623E0C @ 0x140623E0C
 * Callers:
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140625C5C (ExpHwidSysVolIfGetDiskInfo.c)
 *     sub_1406265C0 @ 0x1406265C0 (sub_1406265C0.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     sub_140623E50 @ 0x140623E50 (sub_140623E50.c)
 */

__int64 __fastcall sub_140623E0C(char *a1)
{
  memset(a1, 0, 0x58uLL);
  sub_140623E50(a1);
  sub_140623E50(a1 + 40);
  sub_140623E50(a1 + 56);
  return sub_140623E50(a1 + 72);
}
