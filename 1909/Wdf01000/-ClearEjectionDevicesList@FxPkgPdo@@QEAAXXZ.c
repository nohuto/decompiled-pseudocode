/*
 * XREFs of ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C007C06C
 * Callers:
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x1C003A400 (imp_WdfPdoClearEjectionRelationsDevices.c)
 * Callees:
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000CE54 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00105C0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0064968 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0095950 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

void __fastcall FxPkgPdo::ClearEjectionDevicesList(FxPkgPdo *this)
{
  FxRelatedDeviceList *m_EjectionDeviceList; // rcx
  FxRelatedDevice *NextEntry; // rax
  FxTransactionedList *v4; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdx

  m_EjectionDeviceList = this->m_EjectionDeviceList;
  if ( m_EjectionDeviceList )
  {
    FxTransactionedList::LockForEnum(m_EjectionDeviceList, this->m_Globals);
    while ( 1 )
    {
      NextEntry = FxRelatedDeviceList::GetNextEntry(this->m_EjectionDeviceList, 0LL);
      m_Globals = this->m_Globals;
      if ( !NextEntry )
        break;
      FxTransactionedList::SearchForAndRemove(v4, m_Globals, NextEntry->m_DeviceObject);
    }
    FxTransactionedList::UnlockFromEnum(v4, m_Globals);
  }
}
