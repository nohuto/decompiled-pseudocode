/*
 * XREFs of ?Release@CArrayBasedCoverageSet@@UEAAKXZ @ 0x180064980
 * Callers:
 *     ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800F0570 (-Release@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CArrayBasedCoverageSet::Release(CArrayBasedCoverageSet *this)
{
  return CGdiSpriteBitmap::Release((CArrayBasedCoverageSet *)((char *)this + 8));
}
