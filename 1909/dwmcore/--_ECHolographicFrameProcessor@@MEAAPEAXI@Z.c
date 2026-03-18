/*
 * XREFs of ??_ECHolographicFrameProcessor@@MEAAPEAXI@Z @ 0x180248C9C
 * Callers:
 *     ??_ECHolographicFrameProcessor@@O7EAAPEAXI@Z @ 0x1800F14D0 (--_ECHolographicFrameProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CHolographicFrameProcessor@@MEAA@XZ @ 0x180248BE8 (--1CHolographicFrameProcessor@@MEAA@XZ.c)
 */

CHolographicFrameProcessor *__fastcall CHolographicFrameProcessor::`vector deleting destructor'(
        CHolographicFrameProcessor *this,
        char a2)
{
  CHolographicFrameProcessor::~CHolographicFrameProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
