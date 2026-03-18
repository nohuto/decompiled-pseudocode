/*
 * XREFs of ??_ECDebugFrameCounter@@UEAAPEAXI@Z @ 0x180177F50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x1801914E0 (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
 */

CDebugFrameCounter *__fastcall CDebugFrameCounter::`vector deleting destructor'(CDebugFrameCounter *this, char a2)
{
  *(_QWORD *)this = &CDebugFrameCounter::`vftable';
  CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter((CDebugFrameCounter *)((char *)this + 4656));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
