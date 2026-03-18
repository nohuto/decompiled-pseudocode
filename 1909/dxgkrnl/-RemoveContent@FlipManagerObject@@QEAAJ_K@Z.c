/*
 * XREFs of ?RemoveContent@FlipManagerObject@@QEAAJ_K@Z @ 0x1C005EA08
 * Callers:
 *     NtFlipObjectRemoveContent @ 0x1C005FCB0 (NtFlipObjectRemoveContent.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0012334 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C00625CC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 */

__int64 __fastcall FlipManagerObject::RemoveContent(FlipManagerObject *this, unsigned __int64 a2)
{
  CEndpointResourceStateManager *v4; // rcx
  int v5; // ebx
  struct CFlipResourceState *ResourceState; // rax

  v5 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v5 >= 0 )
  {
    v5 = 0;
    ResourceState = CEndpointResourceStateManager::FindResourceState(v4, a2, (struct _LIST_ENTRY *)((char *)this + 104));
    if ( ResourceState )
      (*(void (__fastcall **)(struct CFlipResourceState *))(*(_QWORD *)ResourceState + 24LL))(ResourceState);
    else
      v5 = -1073741811;
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v5;
}
