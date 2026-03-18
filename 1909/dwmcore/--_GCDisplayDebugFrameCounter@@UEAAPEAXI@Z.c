/*
 * XREFs of ??_GCDisplayDebugFrameCounter@@UEAAPEAXI@Z @ 0x180177FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x1801914E0 (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
 */

CDisplayDebugFrameCounter *__fastcall CDisplayDebugFrameCounter::`scalar deleting destructor'(
        CDisplayDebugFrameCounter *this,
        char a2)
{
  CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
