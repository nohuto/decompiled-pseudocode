/*
 * XREFs of sub_18006303C @ 0x18006303C
 * Callers:
 *     sub_180066938 @ 0x180066938 (sub_180066938.c)
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 *     sub_180073AB4 @ 0x180073AB4 (sub_180073AB4.c)
 *     sub_180089030 @ 0x180089030 (sub_180089030.c)
 *     sub_18008912C @ 0x18008912C (sub_18008912C.c)
 * Callees:
 *     sub_18011E078 @ 0x18011E078 (sub_18011E078.c)
 */

__int64 __fastcall sub_18006303C(__int64 a1, unsigned int a2)
{
  sub_18011E078();
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
