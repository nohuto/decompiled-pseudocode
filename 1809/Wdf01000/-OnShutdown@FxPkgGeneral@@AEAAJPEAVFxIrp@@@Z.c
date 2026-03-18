/*
 * XREFs of ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C009092C
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007A90 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgGeneral::OnShutdown(FxPkgGeneral *this, FxIrp *FxIrp)
{
  unsigned int v3; // ebx
  FxDeviceBase *m_DeviceBase; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v8; // rcx
  _IRP *m_Irp; // rax

  v3 = 0;
  m_DeviceBase = this->m_DeviceBase;
  m_Method = this->m_EvtDeviceShutdown.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v8 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v8 = 0LL;
    m_Method((WDFDEVICE__ *)v8);
    m_DeviceBase = this->m_DeviceBase;
  }
  m_Irp = FxIrp->m_Irp;
  if ( BYTE1(m_DeviceBase[1].m_Globals) )
  {
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    m_Irp->IoStatus.Status = 0;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  return v3;
}
