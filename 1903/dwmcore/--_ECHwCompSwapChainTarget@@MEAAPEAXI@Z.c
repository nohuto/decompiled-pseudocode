/*
 * XREFs of ??_ECHwCompSwapChainTarget@@MEAAPEAXI@Z @ 0x18023F7C0
 * Callers:
 *     ??_ECHwCompSwapChainTarget@@OGA@EAAPEAXI@Z @ 0x1800ED780 (--_ECHwCompSwapChainTarget@@OGA@EAAPEAXI@Z.c)
 *     ??_ECHwCompSwapChainTarget@@OJA@EAAPEAXI@Z @ 0x1800ED790 (--_ECHwCompSwapChainTarget@@OJA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CHwCompSwapChainTarget@@MEAA@XZ @ 0x18023F6F0 (--1CHwCompSwapChainTarget@@MEAA@XZ.c)
 */

CHwCompSwapChainTarget *__fastcall CHwCompSwapChainTarget::`vector deleting destructor'(
        CHwCompSwapChainTarget *this,
        char a2)
{
  CHwCompSwapChainTarget::~CHwCompSwapChainTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
