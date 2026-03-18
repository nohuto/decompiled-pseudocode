/*
 * XREFs of ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x180208BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180206C74 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1CMotion@@QEAA@XZ @ 0x180208B80 (--1CMotion@@QEAA@XZ.c)
 */

CInteractionTrackerPositionAnimation *__fastcall CInteractionTrackerPositionAnimation::`vector deleting destructor'(
        CInteractionTrackerPositionAnimation *this,
        char a2)
{
  CMotion::~CMotion((CInteractionTrackerPositionAnimation *)((char *)this + 432));
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
