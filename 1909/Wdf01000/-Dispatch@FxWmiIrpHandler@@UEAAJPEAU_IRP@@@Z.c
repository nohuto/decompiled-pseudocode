/*
 * XREFs of ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0013BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x1C0013DE4 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     FX_TRACK_DRIVER @ 0x1C00140E0 (FX_TRACK_DRIVER.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C003F4EC (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C00420CC (WPP_IFR_SF_qqcq.c)
 */

__int64 __fastcall FxWmiIrpHandler::Dispatch(FxWmiIrpHandler *this, _IRP *Irp)
{
  unsigned __int8 v4; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  FxWmiProvider *ProviderLocked; // rsi
  FxWmiInstance *InstanceReferencedLocked; // r13
  unsigned __int8 _a3; // bl
  unsigned __int64 v9; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  $AF81E30AEA27D58C62DA291785702D23 *v11; // r14
  unsigned __int8 v12; // r8
  NTSTATUS Status; // ebx
  char v14; // r15
  int (__fastcall *Handler)(FxWmiIrpHandler *, _IRP *, FxWmiProvider *, FxWmiInstance *); // rax
  const void *_a1; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  char v20; // [rsp+98h] [rbp+10h]
  unsigned __int8 irql; // [rsp+A0h] [rbp+18h] BYREF

  FX_TRACK_DRIVER(this->m_Globals);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  ProviderLocked = 0LL;
  v20 = 0;
  InstanceReferencedLocked = 0LL;
  _a3 = CurrentStackLocation->MinorFunction;
  v9 = _a3;
  m_Globals = this->m_Globals;
  v11 = &this->96;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)v11->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11->m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqcq(
      m_Globals,
      5u,
      0xDu,
      0xEu,
      WPP_FxWmiIrpHandler_cpp_Traceguids,
      _a1,
      v11->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3,
      Irp);
  }
  if ( _a3 > 9u && _a3 != 11
    || (_DEVICE_OBJECT *)CurrentStackLocation->Parameters.WMI.ProviderId != v11->m_DeviceBase->m_DeviceObject.m_DeviceObject )
  {
LABEL_34:
    m_DeviceObject = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
    if ( m_DeviceObject )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(m_DeviceObject, Irp);
      goto LABEL_18;
    }
LABEL_36:
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
    goto LABEL_18;
  }
  if ( _a3 == 8 || _a3 == 11 )
  {
    Status = 0;
    v14 = 0;
LABEL_31:
    if ( Status < 0 )
      goto $Done_7;
    goto LABEL_11;
  }
  FxNonPagedObject::Lock(this, &irql, v4);
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(
                     this,
                     (_GUID *)CurrentStackLocation->Parameters.QueryDirectory.FileName);
  if ( ProviderLocked )
  {
    Status = 0;
    if ( !FxWmiIrpHandler::m_WmiDispatchTable[v9].CheckInstance
      || (Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters, (Parameters[1].ReadMode & 0x80u) != 0)
      && (InstanceReferencedLocked = FxWmiProvider::GetInstanceReferencedLocked(
                                       ProviderLocked,
                                       Parameters[1].MaximumInstances,
                                       (void *)v9)) != 0LL )
    {
      FxObject::AddRef(
        ProviderLocked,
        (void *)v9,
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
    v14 = 1;
    goto LABEL_31;
  }
  v14 = 0;
LABEL_11:
  Handler = FxWmiIrpHandler::m_WmiDispatchTable[v9].Handler;
  if ( Handler )
  {
    v20 = 1;
    Status = Handler(this, Irp, ProviderLocked, InstanceReferencedLocked);
  }
$Done_7:
  if ( InstanceReferencedLocked )
    InstanceReferencedLocked->Release(
      InstanceReferencedLocked,
      (void *)v9,
      765,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( ProviderLocked )
    ProviderLocked->Release(
      ProviderLocked,
      (void *)v9,
      770,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( !v20 )
  {
    if ( v14 )
      goto LABEL_36;
    goto LABEL_34;
  }
LABEL_18:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&v11->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  return (unsigned int)Status;
}
