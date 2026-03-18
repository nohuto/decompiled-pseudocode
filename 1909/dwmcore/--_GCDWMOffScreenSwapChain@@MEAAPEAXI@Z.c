/*
 * XREFs of ??_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z @ 0x1800DD8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1800DD930 (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 */

CDWMOffScreenSwapChain *__fastcall CDWMOffScreenSwapChain::`scalar deleting destructor'(
        CDWMOffScreenSwapChain *this,
        char a2)
{
  CDWMOffScreenSwapChain::~CDWMOffScreenSwapChain(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
