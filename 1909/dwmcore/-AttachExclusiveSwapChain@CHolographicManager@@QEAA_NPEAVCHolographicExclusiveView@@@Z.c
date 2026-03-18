/*
 * XREFs of ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x18023F9F4
 * Callers:
 *     ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z @ 0x1802435B8 (-AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z.c)
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x180243B80 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180246EBC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AttachExclusiveSwapChain(CHolographicInteropTaskQueue **this, struct IUnknown *a2)
{
  bool result; // al

  result = 0;
  if ( this[6] )
  {
    if ( *((_BYTE *)this + 240) )
      return CHolographicInteropTaskQueue::PostMessageW(this[6], 0xEu, a2, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
