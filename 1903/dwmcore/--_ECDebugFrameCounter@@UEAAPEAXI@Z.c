/*
 * XREFs of ??_ECDebugFrameCounter@@UEAAPEAXI@Z @ 0x180179650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x180192C20 (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
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
