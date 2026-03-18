/*
 * XREFs of ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x1C00642D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011B94 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C0062344 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C00623C0 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

void __fastcall CFlipPresentUpdate::Pending(CFlipPresentUpdate *this)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 5)) >= 0 )
  {
    CEndpointResourceStateManager::CommitPendingUpdates((CEndpointResourceStateManager *)(v1 + 11));
    ++v1[27];
    if ( !*((_BYTE *)this + 72) )
      CEndpointResourceStateManager::ClearAllContentBindings((CEndpointResourceStateManager *)(v1 + 11));
    CPushLock::ReleaseLock((CPushLock *)(v1 + 5));
  }
}
