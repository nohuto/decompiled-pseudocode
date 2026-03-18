/*
 * XREFs of ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0086EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C00544F8 (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C00633FC (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C00635FC (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007E428 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0082B00 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C0086C10 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
 */

unsigned __int8 __fastcall FxPkgFdo::PnpSendStartDeviceDownTheStackOverload(FxPkgFdo *this)
{
  _IRP *m_PendingPnPIrp; // rbp
  char v3; // r15
  FxFilteredStartContext *v4; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _CM_RESOURCE_LIST *AllocatedResources; // rdx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // r14
  int v8; // edi
  FxCmResList *m_Resources; // r8
  FxCmResList *m_ResourcesRaw; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  unsigned __int16 m_ObjectSize; // r9
  unsigned __int16 v14; // r10
  unsigned __int16 v15; // r11
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  FxFilteredStartContext *v19; // rax
  FxCmResList *v20; // rcx
  _CM_RESOURCE_LIST *WdmList; // rax
  FxCmResList *v22; // rcx
  _CM_RESOURCE_LIST *v23; // rax
  FxPkgFdo *v24; // r9
  int (__fastcall *v25)(_DEVICE_OBJECT *, _IRP *, void *); // r8
  unsigned __int8 v26; // r8
  void *Caller; // [rsp+68h] [rbp+0h]
  FxIrp irp; // [rsp+70h] [rbp+8h] BYREF

  m_PendingPnPIrp = this->m_PendingPnPIrp;
  this->m_PendingPnPIrp = 0LL;
  irp.m_Irp = m_PendingPnPIrp;
  v3 = 0;
  v4 = 0LL;
  CurrentStackLocation = m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  AllocatedResources = CurrentStackLocation->Parameters.StartDevice.AllocatedResources;
  AllocatedResourcesTranslated = CurrentStackLocation->Parameters.StartDevice.AllocatedResourcesTranslated;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( this->m_DeviceRemoveAddedResources.m_Method && AllocatedResources && AllocatedResourcesTranslated )
  {
    this->m_ResourcesRaw->m_Changed = 0;
    this->m_Resources->m_Changed = 0;
    v8 = FxCmResList::BuildFromWdmList(this->m_ResourcesRaw, AllocatedResources, 3u);
    if ( v8 < 0 )
      goto LABEL_38;
    v8 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 3u);
    if ( v8 < 0 )
      goto LABEL_38;
    m_Resources = this->m_Resources;
    m_ResourcesRaw = this->m_ResourcesRaw;
    m_DeviceBase = this->m_DeviceBase;
    m_Method = this->m_DeviceRemoveAddedResources.m_Method;
    m_ObjectSize = m_Resources->m_ObjectSize;
    v14 = m_ResourcesRaw->m_ObjectSize;
    v15 = m_DeviceBase->m_ObjectSize;
    if ( m_Method )
    {
      v16 = (unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v16 = 0LL;
      v17 = (unsigned __int64)m_ResourcesRaw ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v14 )
        v17 = 0LL;
      v18 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v15 )
        v18 = 0LL;
      v8 = m_Method((WDFDEVICE__ *)v18, (WDFCMRESLIST__ *)v17, (WDFCMRESLIST__ *)v16);
    }
    else
    {
      v8 = 0;
    }
    if ( v8 < 0 )
      goto LABEL_38;
    if ( this->m_ResourcesRaw->m_Changed || this->m_Resources->m_Changed )
    {
      v19 = (FxFilteredStartContext *)FxPoolAllocator(
                                        this->m_Globals,
                                        &this->m_Globals->FxPoolFrameworks,
                                        ExDefaultNonPagedPoolType,
                                        0x18uLL,
                                        this->m_Globals->Tag,
                                        Caller);
      v4 = v19;
      if ( v19 )
      {
        v19->ResourcesRaw = 0LL;
        v19->ResourcesTranslated = 0LL;
      }
      else
      {
        v4 = 0LL;
      }
      if ( v4 )
      {
        v4->PkgFdo = this;
        v20 = this->m_ResourcesRaw;
        if ( v20->m_Count )
        {
          WdmList = FxCmResList::CreateWdmList(v20, ExDefaultNonPagedPoolType);
          v4->ResourcesRaw = WdmList;
          if ( !WdmList )
            v8 = -1073741670;
        }
        if ( v8 < 0 )
          goto LABEL_31;
        v22 = this->m_Resources;
        if ( v22->m_Count )
        {
          v23 = FxCmResList::CreateWdmList(v22, ExDefaultNonPagedPoolType);
          v4->ResourcesTranslated = v23;
          if ( !v23 )
            v8 = -1073741670;
        }
        if ( v8 < 0 )
        {
LABEL_31:
          FxFilteredStartContext::`scalar deleting destructor'(v4);
        }
        else
        {
          v3 = 1;
          m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v4->ResourcesRaw;
          m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v4->ResourcesTranslated;
        }
      }
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v8 < 0 )
  {
LABEL_38:
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x17u, WPP_fxpkgfdo_cpp_Traceguids, v8);
    FxPkgPnp::PnpProcessEvent(this, PnpEventStartDeviceFailed, v26);
    FxPkgPnp::CompletePnpRequest(this, &irp, v8);
    return 0;
  }
  if ( v3 )
  {
    v24 = (FxPkgFdo *)v4;
    v25 = FxPkgFdo::_PnpFilteredStartDeviceCompletionRoutine;
  }
  else
  {
    v24 = this;
    v25 = FxPkgFdo::_PnpStartDeviceCompletionRoutine;
  }
  FxIrp::SetCompletionRoutineEx(&irp, this->m_DeviceBase->m_DeviceObject.m_DeviceObject, v25, v24);
  IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, m_PendingPnPIrp);
  return 0;
}
