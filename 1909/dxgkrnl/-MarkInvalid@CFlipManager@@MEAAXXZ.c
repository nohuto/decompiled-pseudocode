/*
 * XREFs of ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C00615D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0012334 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C005E9D8 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x1C00610C0 (-Dequeue@-$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ.c)
 *     ?FreeCancels@CFlipManager@@AEAAXXZ @ 0x1C0061264 (-FreeCancels@CFlipManager@@AEAAXXZ.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C00612F4 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x1C0061368 (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C0062508 (-DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::MarkInvalid(CFlipManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  CFlipPropertySetBase *v4; // rax

  if ( (**(unsigned __int8 (__fastcall ***)(CFlipManager *))this)(this) )
  {
    CPushLock::AcquireLockExclusive((CFlipManager *)((char *)this + 8));
    v2 = (void *)*((_QWORD *)this + 27);
    if ( v2 )
    {
      ObfDereferenceObject(v2);
      *((_QWORD *)this + 27) = 0LL;
    }
    v3 = (void *)*((_QWORD *)this + 28);
    if ( v3 )
    {
      ObfDereferenceObject(v3);
      *((_QWORD *)this + 28) = 0LL;
    }
    CFlipManager::FreeCurrentUpdates(this);
    CEndpointResourceStateManager::DestroyAllResourceStates((CFlipManager *)((char *)this + 56));
    CEndpointResourceStateManager::DestroyAllResourceStates((CFlipManager *)((char *)this + 88));
    CFlipManager::FreeQueuedUpdates(this);
    CFlipManager::FreeCancels(this);
    while ( *((CFlipManager **)this + 21) != (CFlipManager *)((char *)this + 168) )
    {
      v4 = (CFlipPropertySetBase *)CFlipObjectQueue<CFlipConsumerMessage>::Dequeue((_QWORD *)this + 21);
      CFlipPropertySetBase::Release(v4);
    }
    *((_BYTE *)this + 32) &= ~1u;
    CPushLock::ReleaseLock((CFlipManager *)((char *)this + 8));
  }
}
