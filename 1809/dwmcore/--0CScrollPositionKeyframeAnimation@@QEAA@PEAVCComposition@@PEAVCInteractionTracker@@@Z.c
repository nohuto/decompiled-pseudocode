/*
 * XREFs of ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1801D6E84
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@InteractionTrackerProperty@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18019F108 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@W4En.c)
 * Callees:
 *     ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1801E00D4 (--0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1801E5060 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 */

CScrollPositionKeyframeAnimation *__fastcall CScrollPositionKeyframeAnimation::CScrollPositionKeyframeAnimation(
        CScrollPositionKeyframeAnimation *this,
        struct CComposition *a2,
        struct CInteractionTracker *a3)
{
  double ActiveManipulationDelta; // xmm0_8
  double v6; // xmm0_8
  CScrollPositionKeyframeAnimation *result; // rax

  CScrollKeyframeAnimation::CScrollKeyframeAnimation(this, a2, a3);
  *(_QWORD *)this = &CScrollPositionKeyframeAnimation::`vftable';
  ActiveManipulationDelta = InteractionSourceManager::GetActiveManipulationDelta((char *)a3 + 192, 0LL);
  *((_DWORD *)this + 176) = LODWORD(ActiveManipulationDelta);
  v6 = InteractionSourceManager::GetActiveManipulationDelta((char *)a3 + 192, 1LL);
  *((_DWORD *)this + 178) = 0;
  result = this;
  *((_DWORD *)this + 177) = LODWORD(v6);
  return result;
}
