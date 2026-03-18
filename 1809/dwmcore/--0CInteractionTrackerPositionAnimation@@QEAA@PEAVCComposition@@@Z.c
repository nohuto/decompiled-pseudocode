/*
 * XREFs of ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801D79E4
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18019F3A8 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801D5ABC (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CMotion@@QEAA@XZ @ 0x1801DF6CC (--0CMotion@@QEAA@XZ.c)
 */

CInteractionTrackerPositionAnimation *__fastcall CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(
        CInteractionTrackerPositionAnimation *this,
        struct CComposition *a2)
{
  CScrollAnimation::CScrollAnimation(this, a2);
  *(_QWORD *)this = &CInteractionTrackerPositionAnimation::`vftable';
  CMotion::CMotion((CInteractionTrackerPositionAnimation *)((char *)this + 408));
  *((_QWORD *)this + 51) = &CPositionMotion::`vftable';
  return this;
}
