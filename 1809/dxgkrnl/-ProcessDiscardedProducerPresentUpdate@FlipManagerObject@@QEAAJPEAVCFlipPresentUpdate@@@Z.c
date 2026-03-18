/*
 * XREFs of ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C005D10C
 * Callers:
 *     ?Discard@CFlipPresentUpdate@@UEAAXXZ @ 0x1C005D060 (-Discard@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C005AB98 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C005B214 (-CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::ProcessDiscardedProducerPresentUpdate(
        FlipManagerObject *this,
        struct CFlipPresentUpdate *a2)
{
  CFlipManager *v4; // rcx
  int v5; // ebx

  v5 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v5 >= 0 )
  {
    CFlipManager::ReleaseKernelPresentUpdateReferences(v4, a2);
    CEndpointResourceStateManager::CancelPendingUpdates((FlipManagerObject *)((char *)this + 88));
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v5;
}
