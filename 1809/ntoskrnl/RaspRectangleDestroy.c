/*
 * XREFs of RaspRectangleDestroy @ 0x14017AA84
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x140952630 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x14017AC5C (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, __int64 a2)
{
  return RaspFreeMemory(a1, a2);
}
