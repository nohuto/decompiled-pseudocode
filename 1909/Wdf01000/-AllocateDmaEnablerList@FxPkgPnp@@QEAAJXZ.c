/*
 * XREFs of ?AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ @ 0x1C0088AC0
 * Callers:
 *     ?AllocateDmaEnablerList@FxDevice@@UEAAJXZ @ 0x1C0051A20 (-AllocateDmaEnablerList@FxDevice@@UEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall FxPkgPnp::AllocateDmaEnablerList(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  unsigned __int8 v6; // r8
  FxSpinLockTransactionedList *v7; // rax
  FxSpinLockTransactionedList *v8; // rcx
  _LIST_ENTRY *p_m_ListHead; // rax
  void *Caller; // [rsp+38h] [rbp+0h]
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( this->m_DmaEnablerList )
    return 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !this->m_DmaEnablerList )
  {
    v7 = (FxSpinLockTransactionedList *)FxPoolAllocator(
                                          this->m_Globals,
                                          &this->m_Globals->FxPoolFrameworks,
                                          ExDefaultNonPagedPoolType,
                                          0x48uLL,
                                          this->m_Globals->Tag,
                                          Caller);
    v8 = v7;
    if ( v7 )
    {
      v7->m_ListLockedRecursionCount = 0;
      *(_WORD *)&v7->m_DeleteOnRemove = 0;
      v7->m_Retries = 0;
      v7->m_DeletingDoneEvent = 0LL;
      p_m_ListHead = &v7->m_ListHead;
      p_m_ListHead->Blink = p_m_ListHead;
      p_m_ListHead->Flink = p_m_ListHead;
      v8->m_TransactionHead.Blink = &v8->m_TransactionHead;
      v8->m_TransactionHead.Flink = &v8->m_TransactionHead;
      v8->__vftable = (FxSpinLockTransactionedList_vtbl *)FxSpinLockTransactionedList::`vftable';
      v8->m_ListLock.m_Lock = 0LL;
      v8->m_ListLock.m_DbgFlagIsInitialized = 1;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
      this->m_DmaEnablerList = v8;
    else
      v3 = -1073741670;
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  return v3;
}
