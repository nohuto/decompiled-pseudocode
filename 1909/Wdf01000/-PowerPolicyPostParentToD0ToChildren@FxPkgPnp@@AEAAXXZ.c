/*
 * XREFs of ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C008C774
 * Callers:
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C008C58C (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000CE54 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00105C0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0019AA0 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x1C003D0B4 (-PostParentToD0@FxChildList@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerPolicyPostParentToD0ToChildren(FxPkgPnp *this)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *v3; // rdi
  FxTransactionedEntry *NextEntryLocked; // rax
  __int64 v5; // r8

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    v3 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, v3);
      v3 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      FxChildList::PostParentToD0((FxChildList *)NextEntryLocked->m_TransactionedObject);
    }
    FxTransactionedList::UnlockFromEnum((FxTransactionedList *)(v5 + 40), this->m_Globals);
  }
}
