/*
 * XREFs of ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x18020A9A0
 * Callers:
 *     ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z @ 0x18020C854 (-AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z.c)
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x18020CE14 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AttachExclusiveSwapChain(CHolographicInteropTaskQueue **this, struct IUnknown *a2)
{
  bool result; // al

  result = 0;
  if ( this[5] )
  {
    if ( *((_BYTE *)this + 216) )
      return CHolographicInteropTaskQueue::PostMessageW(this[5], 0xEu, a2, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
