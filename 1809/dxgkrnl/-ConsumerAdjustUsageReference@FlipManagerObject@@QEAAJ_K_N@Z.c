/*
 * XREFs of ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C0057544
 * Callers:
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x1C0057E90 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     ?Complete@CFlipWaitedConsumerReturn@@UEAAXXZ @ 0x1C005D1B0 (-Complete@CFlipWaitedConsumerReturn@@UEAAXXZ.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C005B4DC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C005C344 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C005C624 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerAdjustUsageReference(
        struct _LIST_ENTRY *this,
        unsigned __int64 a2,
        char a3)
{
  CEndpointResourceStateManager *v6; // rcx
  signed int v7; // ebx
  struct CFlipResourceState *ResourceState; // rax
  CPoolBufferResource *v9; // rcx

  v7 = CPushLock::AcquireLockExclusive((CPushLock *)&this[2].Blink);
  if ( v7 >= 0 )
  {
    ResourceState = CEndpointResourceStateManager::FindResourceState(v6, a2, this + 8);
    v7 = ResourceState == 0LL ? 0xC000000D : 0;
    if ( ResourceState )
    {
      v9 = (CPoolBufferResource *)*((_QWORD *)ResourceState + 3);
      if ( a3 )
        CPoolBufferResource::AddUsageReference(v9);
      else
        CPoolBufferResource::RemoveUsageReference(v9);
    }
    CPushLock::ReleaseLock((CPushLock *)&this[2].Blink);
  }
  return (unsigned int)v7;
}
