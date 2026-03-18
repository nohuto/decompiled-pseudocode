/*
 * XREFs of RaspDestroyCachedBitmap @ 0x140991698
 * Callers:
 *     BgpRasPrintGlyph @ 0x140182FAC (BgpRasPrintGlyph.c)
 *     RaspClearCache @ 0x14099059C (RaspClearCache.c)
 *     RaspAddCacheEntry @ 0x140991634 (RaspAddCacheEntry.c)
 * Callees:
 *     RaspRectangleDestroy @ 0x14018353C (RaspRectangleDestroy.c)
 *     RaspFreeMemory @ 0x140183714 (RaspFreeMemory.c)
 */

void __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, 24);
  RaspRectangleDestroy(*(_QWORD *)(a1 + 16), (__int64)v2);
  RaspFreeMemory(a1, v2);
}
