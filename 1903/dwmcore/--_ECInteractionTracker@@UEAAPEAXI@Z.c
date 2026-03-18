/*
 * XREFs of ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x1801D8980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1801D862C (--1CInteractionTracker@@UEAA@XZ.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::`vector deleting destructor'(CInteractionTracker *this, char a2)
{
  CInteractionTracker::~CInteractionTracker(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
