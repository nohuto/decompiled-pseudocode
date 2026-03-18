/*
 * XREFs of ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00642D4
 * Callers:
 *     imp_WdfPdoRemoveEjectionRelationsPhysicalDevice @ 0x1C003B1A0 (imp_WdfPdoRemoveEjectionRelationsPhysicalDevice.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C004AC60 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     imp_WdfDeviceRemoveDependentUsageDeviceObject @ 0x1C004AEA0 (imp_WdfDeviceRemoveDependentUsageDeviceObject.c)
 *     imp_WdfDeviceRemoveRemovalRelationsPhysicalDevice @ 0x1C004AF10 (imp_WdfDeviceRemoveRemovalRelationsPhysicalDevice.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C007B68C (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0019DB0 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x1C0064204 (-RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxTransactionedList::SearchForAndRemove(
        FxTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *EntryData)
{
  unsigned __int8 v4; // bp
  _LIST_ENTRY *i; // rbx
  FxTransactionedEntry *v8; // rdi
  __int64 v9; // r8
  FxTransactionedEntry *NextEntryLocked; // rax
  __int64 v11; // r8
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  for ( i = this->m_TransactionHead.Flink; i != &this->m_TransactionHead; i = i->Flink )
  {
    v8 = (FxTransactionedEntry *)&i[-1];
    if ( this->Compare(this, (FxTransactionedEntry *)&i[-1], EntryData) )
    {
      if ( v8->m_Transaction == FxTransactionActionAdd )
      {
        Flink = i->Flink;
        if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
          __fastfail(3u);
        Blink->Flink = Flink;
        v4 = 1;
        Flink->Blink = Blink;
        i->Blink = i;
        i->Flink = i;
      }
      goto $Done_39;
    }
  }
  v8 = 0LL;
  while ( 1 )
  {
    NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this, v8);
    v8 = NextEntryLocked;
    if ( !NextEntryLocked )
      break;
    if ( this->Compare(this, NextEntryLocked, EntryData) )
    {
      v4 = FxTransactionedList::RemoveLocked(this, v8, v11);
      break;
    }
  }
$Done_39:
  LOBYTE(v9) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v9);
  if ( v4 )
  {
    if ( this->m_DeleteOnRemove )
      v8->m_TransactionedObject->DeleteObject(v8->m_TransactionedObject);
  }
}
