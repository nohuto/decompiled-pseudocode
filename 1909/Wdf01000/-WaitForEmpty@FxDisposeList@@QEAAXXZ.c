/*
 * XREFs of ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0056F2C
 * Callers:
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C004E260 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C005334C (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C0053740 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxDriver@@UEAAEXZ @ 0x1C00555F0 (-Dispose@FxDriver@@UEAAEXZ.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007E0FC (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x1C0056E28 (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 */

void __fastcall FxDisposeList::WaitForEmpty(FxDisposeList *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  char v5; // di
  FxSystemWorkItem *m_SystemWorkItem; // rbx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  v5 = 1;
  if ( this->m_WorkItemThread == KeGetCurrentThread() )
  {
    FxDisposeList::DrainListLocked(this, &irql);
    v5 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v4);
  if ( v5 )
  {
    m_SystemWorkItem = this->m_SystemWorkItem;
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
}
