/*
 * XREFs of sub_1800781A8 @ 0x1800781A8
 * Callers:
 *     sub_1800956D0 @ 0x1800956D0 (sub_1800956D0.c)
 *     sub_18009D920 @ 0x18009D920 (sub_18009D920.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800781A8(__int64 a1, int a2, int a3)
{
  return (a3 & *(_DWORD *)(a1 + 4LL * a2 + 748)) != 0;
}
