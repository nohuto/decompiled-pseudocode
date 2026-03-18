/*
 * XREFs of TxtpDestroyCacheEntry @ 0x1409948F8
 * Callers:
 *     TxtpAddCacheEntry @ 0x14099158C (TxtpAddCacheEntry.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x14098F254 (BgpGxRectangleDestroy.c)
 */

void __fastcall TxtpDestroyCacheEntry(__int64 a1)
{
  BgpGxRectangleDestroy(*(_QWORD *)(a1 + 48));
  BgpFwFreeMemory(a1);
}
