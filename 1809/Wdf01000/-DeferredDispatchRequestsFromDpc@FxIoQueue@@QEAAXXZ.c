/*
 * XREFs of ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x1C007846C
 * Callers:
 *     ?_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0079C20 (-_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxIoQueue::DeferredDispatchRequestsFromDpc(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  v4 = irql;
  this->m_RequeueDeferredDispatcher = 0;
  FxIoQueue::DispatchEvents(this, v4, 0LL, v5);
  FxNonPagedObject::Lock(this, &irql, v6);
  if ( this->m_Deleted || !this->m_RequeueDeferredDispatcher )
  {
    this->m_RequeueDeferredDispatcher = 0;
    this->m_DpcQueued = 0;
  }
  else
  {
    KeInsertQueueDpc(&this->m_Dpc, 0LL, 0LL);
  }
  FxNonPagedObject::Unlock(this, irql, v7);
}
