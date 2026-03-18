/*
 * XREFs of ??_GCDWMSwapChainDDA@@UEAAPEAXI@Z @ 0x1801635A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800DA250 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CDWMSwapChainDDA *__fastcall CDWMSwapChainDDA::`scalar deleting destructor'(CDWMSwapChainDDA *this, char a2)
{
  CDWMSwapChain::~CDWMSwapChain(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
