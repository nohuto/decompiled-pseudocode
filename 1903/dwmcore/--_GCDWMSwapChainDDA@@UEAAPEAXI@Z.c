/*
 * XREFs of ??_GCDWMSwapChainDDA@@UEAAPEAXI@Z @ 0x180164C90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800D9700 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
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
