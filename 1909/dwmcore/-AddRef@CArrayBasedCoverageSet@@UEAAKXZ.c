/*
 * XREFs of ?AddRef@CArrayBasedCoverageSet@@UEAAKXZ @ 0x1800C07C0
 * Callers:
 *     ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800F0B10 (-AddRef@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1800F14E0 (-AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1800F14F0 (-AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CArrayBasedCoverageSet::AddRef(CArrayBasedCoverageSet *this)
{
  return CMILCOMBase::InternalAddRef((CArrayBasedCoverageSet *)((char *)this + 8));
}
