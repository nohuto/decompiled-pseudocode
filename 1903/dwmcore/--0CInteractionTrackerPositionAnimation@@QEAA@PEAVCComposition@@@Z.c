/*
 * XREFs of ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180208B34
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801DA0B0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180206C30 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CMotion@@QEAA@XZ @ 0x18020F7E0 (--0CMotion@@QEAA@XZ.c)
 */

CInteractionTrackerPositionAnimation *__fastcall CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(
        CInteractionTrackerPositionAnimation *this,
        struct CComposition *a2)
{
  CScrollAnimation::CScrollAnimation(this, a2);
  *(_QWORD *)this = &CInteractionTrackerPositionAnimation::`vftable';
  CMotion::CMotion((CInteractionTrackerPositionAnimation *)((char *)this + 432));
  *((_QWORD *)this + 54) = &CPositionMotion::`vftable';
  return this;
}
