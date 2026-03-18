/*
 * XREFs of ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0013D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x1C0013F40 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     FX_TRACK_DRIVER @ 0x1C0014240 (FX_TRACK_DRIVER.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C004028C (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0042EFC (WPP_IFR_SF_qqcq.c)
 */

__int64 __fastcall FxWmiIrpHandler::Dispatch(FxWmiIrpHandler *this, _IRP *Irp)
{
  unsigned __int8 v4; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  FxWmiProvider *ProviderLocked; // r14
  FxWmiInstance *InstanceReferencedLocked; // r12
  char v8; // r13
  unsigned __int8 _a3; // bl
  unsigned __int64 v10; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 v12; // r8
  NTSTATUS Status; // ebx
  int (__fastcall *Handler)(FxWmiIrpHandler *, _IRP *, FxWmiProvider *, FxWmiInstance *); // rax
  char v15; // bp
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int8 irql; // [rsp+98h] [rbp+10h] BYREF

  FX_TRACK_DRIVER(this->m_Globals);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  ProviderLocked = 0LL;
  InstanceReferencedLocked = 0LL;
  v8 = 0;
  _a3 = CurrentStackLocation->MinorFunction;
  v10 = _a3;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqcq(
      m_Globals,
      5u,
      0xDu,
      0xEu,
      WPP_FxWmiIrpHandler_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3,
      Irp);
  }
  if ( _a3 > 9u && _a3 != 11
    || (_DEVICE_OBJECT *)CurrentStackLocation->Parameters.WMI.ProviderId != this->m_DeviceBase->m_DeviceObject.m_DeviceObject )
  {
LABEL_33:
    m_DeviceObject = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
    if ( m_DeviceObject )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(m_DeviceObject, Irp);
      goto LABEL_17;
    }
LABEL_35:
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
    goto LABEL_17;
  }
  if ( _a3 == 8 || _a3 == 11 )
  {
    Status = 0;
LABEL_30:
    if ( Status < 0 )
      goto LABEL_31;
    goto LABEL_10;
  }
  FxNonPagedObject::Lock(this, &irql, v4);
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(
                     this,
                     (_GUID *)CurrentStackLocation->Parameters.QueryDirectory.FileName);
  if ( ProviderLocked )
  {
    Status = 0;
    if ( !FxWmiIrpHandler::m_WmiDispatchTable[v10].CheckInstance
      || (Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters, (Parameters[1].ReadMode & 0x80u) != 0)
      && (InstanceReferencedLocked = FxWmiProvider::GetInstanceReferencedLocked(
                                       ProviderLocked,
                                       Parameters[1].MaximumInstances,
                                       (void *)v10)) != 0LL )
    {
      FxObject::AddRef(
        ProviderLocked,
        (void *)v10,
        735,
        "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
      goto LABEL_9;
    }
    Status = -1073741162;
  }
  else
  {
    Status = -1073741163;
  }
  ProviderLocked = 0LL;
LABEL_9:
  FxNonPagedObject::Unlock(this, irql, v12);
  if ( Status < 0 )
  {
    Irp->IoStatus.Status = Status;
    v8 = 1;
    goto LABEL_30;
  }
LABEL_10:
  Handler = FxWmiIrpHandler::m_WmiDispatchTable[v10].Handler;
  if ( Handler )
  {
    Status = Handler(this, Irp, ProviderLocked, InstanceReferencedLocked);
    v15 = 1;
    goto $Done_7;
  }
LABEL_31:
  v15 = 0;
$Done_7:
  if ( InstanceReferencedLocked )
    InstanceReferencedLocked->Release(
      InstanceReferencedLocked,
      (void *)v10,
      765,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( ProviderLocked )
    ProviderLocked->Release(
      ProviderLocked,
      (void *)v10,
      770,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( !v15 )
  {
    if ( v8 )
      goto LABEL_35;
    goto LABEL_33;
  }
LABEL_17:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  return (unsigned int)Status;
}
