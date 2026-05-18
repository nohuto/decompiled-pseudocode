/*
 * XREFs of sub_18006AA40 @ 0x18006AA40
 * Callers:
 *     sub_18009AB00 @ 0x18009AB00 (sub_18009AB00.c)
 * Callees:
 *     sub_1800E03E0 @ 0x1800E03E0 (sub_1800E03E0.c)
 */

__int64 __fastcall sub_18006AA40(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96) + 14472LL;
  v4 = *a2;
  return sub_1800E03E0(v2, &v4);
}
