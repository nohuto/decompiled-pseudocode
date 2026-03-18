/*
 * XREFs of ??_ECCompositionSwapchainStatistics@@MEAAPEAXI@Z @ 0x180263740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CCompositionSwapchainStatistics@@MEAA@XZ @ 0x1802636AC (--1CCompositionSwapchainStatistics@@MEAA@XZ.c)
 */

CCompositionSwapchainStatistics *__fastcall CCompositionSwapchainStatistics::`vector deleting destructor'(
        CCompositionSwapchainStatistics *this,
        char a2)
{
  CCompositionSwapchainStatistics::~CCompositionSwapchainStatistics(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
