/*
 * XREFs of ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0012C00
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00124F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C00509E0 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C007ACA8 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C007B018 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequest::AssignMemoryBuffers(FxRequest *this, _WDF_DEVICE_IO_TYPE IoType)
{
  _IRP *m_Irp; // r10
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned __int8 MajorFunction; // r9
  int v5; // eax
  void *UserBuffer; // rax
  int v7; // edx
  void *MasterIrp; // rax

  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( MajorFunction < 3u )
      return;
    if ( MajorFunction <= 4u )
    {
      v7 = IoType - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return;
        MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
      }
      else
      {
        if ( m_Irp->RequestorMode )
          return;
        MasterIrp = m_Irp->UserBuffer;
      }
      this->m_SystemBuffer.m_Buffer = MasterIrp;
      goto LABEL_6;
    }
    if ( MajorFunction != 14 )
      return;
  }
  v5 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3;
  if ( v5 == 3 )
  {
    if ( MajorFunction != 15 && m_Irp->RequestorMode )
      return;
    this->m_SystemBuffer.m_Buffer = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    UserBuffer = m_Irp->UserBuffer;
  }
  else
  {
    if ( v5 )
    {
      if ( (unsigned int)(v5 - 1) <= 1 )
        this->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
      goto LABEL_6;
    }
    this->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
    UserBuffer = m_Irp->AssociatedIrp.MasterIrp;
  }
  this->m_OutputBuffer.m_Buffer = UserBuffer;
LABEL_6:
  if ( this->m_SystemBuffer.m_Buffer )
    this->m_RequestBaseStaticFlags |= 1u;
  if ( this->m_OutputBuffer.m_Buffer )
    this->m_RequestBaseStaticFlags |= 2u;
}
