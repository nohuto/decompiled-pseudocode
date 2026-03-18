/*
 * XREFs of GreDeleteDC @ 0x1C0058FE0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteDCInternal @ 0x1C0059000 (bDeleteDCInternal.c)
 */

__int64 __fastcall GreDeleteDC(__int64 a1)
{
  return bDeleteDCInternal(a1, 1LL, 0LL);
}
