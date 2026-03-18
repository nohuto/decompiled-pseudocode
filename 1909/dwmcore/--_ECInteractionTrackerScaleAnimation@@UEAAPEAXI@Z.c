/*
 * XREFs of ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x180207C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180205584 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1CMotion@@QEAA@XZ @ 0x180207490 (--1CMotion@@QEAA@XZ.c)
 */

CInteractionTrackerScaleAnimation *__fastcall CInteractionTrackerScaleAnimation::`vector deleting destructor'(
        CInteractionTrackerScaleAnimation *this,
        char a2)
{
  CMotion::~CMotion((CInteractionTrackerScaleAnimation *)((char *)this + 432));
  CScrollAnimation::~CScrollAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
