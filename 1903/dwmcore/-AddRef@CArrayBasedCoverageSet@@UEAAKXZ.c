/*
 * XREFs of ?AddRef@CArrayBasedCoverageSet@@UEAAKXZ @ 0x1800C0190
 * Callers:
 *     ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800ECE50 (-AddRef@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1800ED820 (-AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1800ED830 (-AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CArrayBasedCoverageSet::AddRef(CArrayBasedCoverageSet *this)
{
  return CMILCOMBase::InternalAddRef((CArrayBasedCoverageSet *)((char *)this + 8));
}
