/*
 * XREFs of ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0084258
 * Callers:
 *     ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007CBB0 (-_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00887F0 (-_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C001598C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C003A1F0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     FxIsEqualGuid @ 0x1C003AEB0 (FxIsEqualGuid.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0042574 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?HandleQueryInterfaceForSecureDriver@FxCompanionTarget@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x1C00449A0 (-HandleQueryInterfaceForSecureDriver@FxCompanionTarget@@QEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x1C007C190 (-HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0084520 (-HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C008560C (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPnp::HandleQueryInterface(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 *CompleteRequest)
{
  _IRP *m_Irp; // rax
  _SINGLE_LIST_ENTRY *v7; // rbx
  _SINGLE_LIST_ENTRY *v8; // r14
  _QWORD *QuadPart; // r13
  const _GUID *InterfaceType; // rdi
  _FX_DRIVER_GLOBALS *v12; // rdx
  FxCompanionTarget *v13; // rcx
  int Status; // edi
  _SINGLE_LIST_ENTRY *Next; // r15
  char v16; // r15
  unsigned __int16 *v17; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v22; // rcx
  NTSTATUS v23; // eax
  void (__fastcall *v24)(_QWORD, _IO_SECURITY_CONTEXT *, _QWORD); // rax
  unsigned __int8 v25; // r8
  _IO_STACK_LOCATION *v26; // rcx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+88h] [rbp+20h]

  m_Irp = Irp->m_Irp;
  *CompleteRequest = 0;
  Parameters = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  QuadPart = 0LL;
  InterfaceType = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( FxIsEqualGuid(InterfaceType, &FxPkgPnp::GUID_POWER_THREAD_INTERFACE) )
    return FxPkgPnp::HandleQueryInterfaceForPowerThread(this, Irp, CompleteRequest);
  if ( FxIsEqualGuid(InterfaceType, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD) )
  {
    if ( FxDevice::IsPdo(this->m_Device) )
      return FxPkgPdo::HandleQueryInterfaceForReenumerate((FxPkgPdo *)this, Irp, CompleteRequest);
  }
  else if ( FxIsEqualGuid(InterfaceType, &GUID_SECURE_DRIVER_INTERFACE) && this->m_CompanionTarget )
  {
    return FxCompanionTarget::HandleQueryInterfaceForSecureDriver(v13, Irp, CompleteRequest);
  }
  Status = Irp->m_Irp->IoStatus.Status;
  FxWaitLockInternal::AcquireLock(&this->m_QueryInterfaceLock, v12, 0LL);
  Next = this->m_QueryInterfaceHead.Next;
  if ( Next )
  {
    while ( 1 )
    {
      v8 = Next - 5;
      if ( FxIsEqualGuid(
             Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryInterface.InterfaceType,
             (const _GUID *)&Next[-5]) )
      {
        break;
      }
      Next = Next->Next;
      if ( !Next )
      {
        v8 = 0LL;
        v16 = 0;
        goto LABEL_22;
      }
    }
    Status = 0;
    v17 = (unsigned __int16 *)v8[2].Next;
    CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( !v17 )
      goto LABEL_18;
    if ( *v17 <= CurrentStackLocation->Parameters.QueryInterface.Size
      && v17[1] <= CurrentStackLocation->Parameters.QueryInterface.Version )
    {
      if ( !LOBYTE(v8[6].Next) )
        memmove(QuadPart, v17, *v17);
LABEL_18:
      v7 = v8[4].Next;
      v16 = BYTE1(v8[6].Next);
      goto LABEL_22;
    }
    Status = -1073741306;
    v8 = 0LL;
    v16 = 0;
  }
  else
  {
    v16 = 0;
  }
LABEL_22:
  this->m_QueryInterfaceLock.m_OwningThread = 0LL;
  KeSetEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  if ( Status < 0 )
    goto $Done_58;
  if ( v8 )
  {
    SecurityContext = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( v7 )
    {
      v22 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v22 = 0LL;
      Status = ((__int64 (__fastcall *)(unsigned __int64, _IO_SECURITY_CONTEXT *, _QWORD *, _NAMED_PIPE_CREATE_PARAMETERS *))v7)(
                 v22,
                 SecurityContext,
                 QuadPart,
                 Parameters);
    }
    else
    {
      Status = 0;
    }
    if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741637 )
      goto $Done_58;
    if ( v16 )
    {
      v23 = PnpPassThroughQI(this->m_Device, Irp);
    }
    else
    {
      v24 = (void (__fastcall *)(_QWORD, _IO_SECURITY_CONTEXT *, _QWORD))QuadPart[2];
      if ( v24 )
        v24(QuadPart[1], SecurityContext, 0LL);
      if ( FxDevice::IsPdo(this->m_Device) )
        goto $Done_58;
      Irp->m_Irp->IoStatus.Status = Status;
      v26 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v26[-1].MajorFunction = *(_OWORD *)&v26->MajorFunction;
      *(_OWORD *)&v26[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v26->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v26[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v26->Parameters.SetQuota + 6);
      v26[-1].FileObject = v26->FileObject;
      v26[-1].Control = v25;
      v23 = FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
    }
    Status = v23;
$Done_58:
    if ( v8 )
      *CompleteRequest = 1;
  }
  return Status;
}
