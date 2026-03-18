/*
 * XREFs of ?AddRef@CArrayBasedCoverageSet@@UEAAKXZ @ 0x1800648B0
 * Callers:
 *     ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800F0550 (-AddRef@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CArrayBasedCoverageSet::AddRef(CArrayBasedCoverageSet *this)
{
  return CMILCOMBase::InternalAddRef((CArrayBasedCoverageSet *)((char *)this + 8));
}
