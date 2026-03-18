/*
 * XREFs of GreDeleteDC @ 0x1C00A3AD0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteDCInternal @ 0x1C0010100 (bDeleteDCInternal.c)
 */

__int64 __fastcall GreDeleteDC(__int64 a1)
{
  return bDeleteDCInternal(a1, 1, 0, 0);
}
