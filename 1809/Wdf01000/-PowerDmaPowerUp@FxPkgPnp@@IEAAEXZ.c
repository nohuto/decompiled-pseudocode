/*
 * XREFs of ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x1C008E028
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C008000C (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000FFD0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0013B08 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0019DB0 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C001A38C (-PowerUp@FxDmaEnabler@@QEAAJXZ.c)
 */

char __fastcall FxPkgPnp::PowerDmaPowerUp(FxPkgPnp *this)
{
  char v2; // di
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  FxTransactionedEntry *v4; // rsi
  FxTransactionedEntry *NextEntryLocked; // rax
  unsigned __int8 v6; // dl
  FxSpinLockTransactionedList *v7; // r8

  v2 = 1;
  m_DmaEnablerList = this->m_DmaEnablerList;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v4 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this->m_DmaEnablerList, v4);
      v4 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      if ( (int)FxDmaEnabler::PowerUp((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject, v6, (unsigned int)v7) < 0 )
      {
        v7 = this->m_DmaEnablerList;
        v2 = 0;
        break;
      }
    }
    FxTransactionedList::UnlockFromEnum(v7, this->m_Globals);
  }
  return v2;
}
