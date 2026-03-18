/*
 * XREFs of ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180207444
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801D89A0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180205540 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CMotion@@QEAA@XZ @ 0x18020E0D0 (--0CMotion@@QEAA@XZ.c)
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
