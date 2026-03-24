/*
 * XREFs of RaspRectangleDestroy @ 0x14017A984
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x140951630 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x14017AB5C (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, __int64 a2)
{
  return RaspFreeMemory(a1, a2);
}
