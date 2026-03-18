/*
 * XREFs of ??_ECScrollKeyframeAnimation@@UEAAPEAXI@Z @ 0x1802102F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x180210274 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 */

CScrollKeyframeAnimation *__fastcall CScrollKeyframeAnimation::`vector deleting destructor'(
        CScrollKeyframeAnimation *this,
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
