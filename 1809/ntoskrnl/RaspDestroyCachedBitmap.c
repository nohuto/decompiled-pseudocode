/*
 * XREFs of RaspDestroyCachedBitmap @ 0x140951630
 * Callers:
 *     BgpRasPrintGlyph @ 0x14017A1B4 (BgpRasPrintGlyph.c)
 *     RaspClearCache @ 0x14095054C (RaspClearCache.c)
 *     RaspAddCacheEntry @ 0x1409515CC (RaspAddCacheEntry.c)
 * Callees:
 *     RaspRectangleDestroy @ 0x14017A964 (RaspRectangleDestroy.c)
 *     RaspFreeMemory @ 0x14017AB3C (RaspFreeMemory.c)
 */

void __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, 24);
  RaspRectangleDestroy(*(_QWORD *)(a1 + 16), (__int64)v2);
  RaspFreeMemory(a1, v2);
}
