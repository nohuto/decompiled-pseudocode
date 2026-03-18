/*
 * XREFs of ?PowerReleasePendingDeviceIrp@FxPkgFdo@@EEAAXE@Z @ 0x1C0017610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgFdo::PowerReleasePendingDeviceIrp(FxPkgFdo *this, unsigned __int8 IrpMustBePresent)
{
  _IRP *m_PendingDevicePowerIrp; // rbx
  unsigned int LowPart; // r8d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  m_PendingDevicePowerIrp = this->m_PendingDevicePowerIrp;
  this->m_PendingDevicePowerIrp = 0LL;
  if ( m_PendingDevicePowerIrp )
  {
    LowPart = m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    m_PendingDevicePowerIrp->IoStatus.Status = 0;
    if ( LowPart == 1 )
    {
      PoStartNextPowerIrp(m_PendingDevicePowerIrp);
      IofCompleteRequest(m_PendingDevicePowerIrp, 0);
    }
    else
    {
      PoStartNextPowerIrp(m_PendingDevicePowerIrp);
      CurrentStackLocation = m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, m_PendingDevicePowerIrp);
    }
    IoReleaseRemoveLockEx(
      (PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
      m_PendingDevicePowerIrp,
      0x20u);
  }
}
