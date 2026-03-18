/*
 * XREFs of ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1800ED820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::AddRef(__int64 a1)
{
  return CArrayBasedCoverageSet::AddRef((CArrayBasedCoverageSet *)(a1 - 32));
}
