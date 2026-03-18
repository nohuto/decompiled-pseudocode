/*
 * XREFs of ?PowerReleasePendingDeviceIrp@FxPkgPdo@@EEAAXE@Z @ 0x1C0018320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPdo::PowerReleasePendingDeviceIrp(FxPkgPdo *this, unsigned __int8 IrpMustBePresent)
{
  _IRP *m_PendingDevicePowerIrp; // rbx

  m_PendingDevicePowerIrp = this->m_PendingDevicePowerIrp;
  this->m_PendingDevicePowerIrp = 0LL;
  if ( m_PendingDevicePowerIrp )
  {
    m_PendingDevicePowerIrp->IoStatus.Status = 0;
    PoStartNextPowerIrp(m_PendingDevicePowerIrp);
    IofCompleteRequest(m_PendingDevicePowerIrp, 0);
    IoReleaseRemoveLockEx(
      (PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
      m_PendingDevicePowerIrp,
      0x20u);
  }
}
