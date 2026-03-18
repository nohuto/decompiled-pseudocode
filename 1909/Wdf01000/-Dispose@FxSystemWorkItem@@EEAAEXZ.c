/*
 * XREFs of ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x1C0057CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ @ 0x1C0057C90 (-DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxSystemWorkItem::Dispose(FxSystemWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  v4 = irql;
  this->m_RunningDown = 1;
  FxNonPagedObject::Unlock(this, v4, v5);
  FxSystemWorkItem::DecrementWorkItemQueued(this);
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&this->m_RemoveEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
  return 1;
}
