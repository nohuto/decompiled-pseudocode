/*
 * XREFs of ??_ECFlipExSwapchainStatistics@@MEAAPEAXI@Z @ 0x18004F5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CFlipExSwapchainStatistics *__fastcall CFlipExSwapchainStatistics::`vector deleting destructor'(
        CFlipExSwapchainStatistics *this,
        char a2)
{
  *((_QWORD *)this + 2) = &CFlipExSwapchainStatistics::`vftable'{for `ICompositionSurfaceStatistics'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
