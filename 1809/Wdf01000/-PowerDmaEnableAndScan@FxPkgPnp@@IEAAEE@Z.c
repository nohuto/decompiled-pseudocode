/*
 * XREFs of ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C008000C
 * Callers:
 *     ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007FF30 (-PowerD0StartingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081520 (-PowerWakingDmaEnableNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000FFD0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0010E80 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0013B08 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0019DB0 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x1C008E028 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerDmaEnableAndScan(FxPkgPnp *this, unsigned __int8 ImplicitPowerUp)
{
  unsigned __int8 result; // al
  unsigned __int8 v5; // r8
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *v7; // rdi
  FxTransactionedEntry *NextEntryLocked; // rax
  __int64 v9; // r8
  FxObject *m_TransactionedObject; // rcx
  _SINGLE_LIST_ENTRY *Next; // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v13; // rcx

  result = FxPkgPnp::PowerDmaPowerUp(this);
  if ( result )
  {
    m_EnumInfo = this->m_EnumInfo;
    if ( m_EnumInfo )
    {
      FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
      v7 = 0LL;
      while ( 1 )
      {
        NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, v7);
        v7 = NextEntryLocked;
        if ( !NextEntryLocked )
          break;
        m_TransactionedObject = NextEntryLocked->m_TransactionedObject;
        Next = m_TransactionedObject[1].m_DisposeSingleEntry.Next;
        m_ObjectSize = m_TransactionedObject->m_ObjectSize;
        if ( Next )
        {
          v13 = (unsigned __int64)m_TransactionedObject ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !m_ObjectSize )
            v13 = 0LL;
          ((void (__fastcall *)(unsigned __int64))Next)(v13);
        }
      }
      FxTransactionedList::UnlockFromEnum((FxTransactionedList *)(v9 + 40), this->m_Globals);
    }
    if ( !ImplicitPowerUp )
      FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUpHwStarted, v5);
    return 1;
  }
  return result;
}
