/*
 * XREFs of sub_180078098 @ 0x180078098
 * Callers:
 *     sub_1800955C0 @ 0x1800955C0 (sub_1800955C0.c)
 *     sub_18009D810 @ 0x18009D810 (sub_18009D810.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180078098(__int64 a1, int a2, int a3)
{
  return (a3 & *(_DWORD *)(a1 + 4LL * a2 + 748)) != 0;
}
