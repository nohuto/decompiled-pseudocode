/*
 * XREFs of ??_ECScrollScaleKeyframeAnimation@@UEAAPEAXI@Z @ 0x180206F20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x18020EB64 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 */

CScrollScaleKeyframeAnimation *__fastcall CScrollScaleKeyframeAnimation::`vector deleting destructor'(
        CScrollScaleKeyframeAnimation *this,
        char a2)
{
  CScrollKeyframeAnimation::~CScrollKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
