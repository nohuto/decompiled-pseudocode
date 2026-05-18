/*
 * XREFs of sub_18006314C @ 0x18006314C
 * Callers:
 *     sub_180066A48 @ 0x180066A48 (sub_180066A48.c)
 *     sub_18006BD30 @ 0x18006BD30 (sub_18006BD30.c)
 *     sub_180073BC4 @ 0x180073BC4 (sub_180073BC4.c)
 *     sub_180089140 @ 0x180089140 (sub_180089140.c)
 *     sub_18008923C @ 0x18008923C (sub_18008923C.c)
 * Callees:
 *     sub_18011E188 @ 0x18011E188 (sub_18011E188.c)
 */

__int64 __fastcall sub_18006314C(__int64 a1, unsigned int a2)
{
  sub_18011E188();
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
