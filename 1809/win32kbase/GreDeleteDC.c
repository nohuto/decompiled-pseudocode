/*
 * XREFs of GreDeleteDC @ 0x1C00427B0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteDCInternal @ 0x1C00427D0 (bDeleteDCInternal.c)
 */

__int64 __fastcall GreDeleteDC(__int64 a1)
{
  return bDeleteDCInternal(a1, 1LL, 0LL, 0LL);
}
