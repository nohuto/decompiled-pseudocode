/*
 * XREFs of ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0083FD8
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003A84 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000F244 (-PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000CE54 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00105C0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0095950 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryDeviceRelations(FxPkgPnp *this, FxIrp *Irp, FxRelatedDeviceList *List)
{
  __int64 result; // rax
  _IRP *m_Irp; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  FxDeviceBase *m_DeviceBase; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int16 m_ObjectSize; // dx
  DEVICE_RELATION_TYPE v12; // r8d
  void (__fastcall *m_Method)(WDFDEVICE__ *, _DEVICE_RELATION_TYPE); // rax
  unsigned __int64 v14; // rcx
  unsigned int *Information; // rdi
  int v16; // ebx
  FxRelatedDevice *NextEntry; // rax
  SIZE_T v18; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v20; // rbp
  unsigned int i; // ebx
  unsigned int v22; // r15d
  unsigned __int8 m_Retries; // bl
  FxDeviceBase *v24; // rcx
  unsigned __int16 v25; // ax
  const void *_a1; // rcx
  bool v27; // bl
  FxRelatedDevice *v28; // rbx
  FxRelatedDevice *v29; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  DEVICE_RELATION_TYPE Type; // [rsp+A8h] [rbp+20h]

  if ( !List )
    return 3221225659LL;
  m_Irp = Irp->m_Irp;
  m_Globals = this->m_Globals;
  m_DeviceBase = this->m_DeviceBase;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v12 = CurrentStackLocation->Parameters.QueryDeviceRelations.Type;
  m_Method = this->m_DeviceRelationsQuery.m_Method;
  Type = v12;
  if ( m_Method )
  {
    v14 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v14 = 0LL;
    m_Method((WDFDEVICE__ *)v14, v12);
    m_Irp = Irp->m_Irp;
  }
  Information = (unsigned int *)m_Irp->IoStatus.Information;
  v16 = 0;
  FxTransactionedList::LockForEnum(List, m_Globals);
  NextEntry = 0LL;
  while ( 1 )
  {
    NextEntry = FxRelatedDeviceList::GetNextEntry(List, NextEntry);
    if ( !NextEntry )
      break;
    ++v16;
  }
  if ( v16 )
  {
    if ( Information )
      v16 += *Information;
    if ( v16 )
    {
      v18 = 8LL * (unsigned int)(v16 - 1) + 16;
      goto LABEL_19;
    }
  }
  else if ( !List->m_NeedReportMissing || Information )
  {
    FxTransactionedList::UnlockFromEnum(List, m_Globals);
    return 3221225659LL;
  }
  v18 = 4LL;
LABEL_19:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, m_Globals->Tag);
  v20 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v18);
    if ( Information && *Information )
      memmove(v20, Information, 8LL * (*Information - 1) + 16);
    v28 = 0LL;
    while ( 1 )
    {
      v29 = FxRelatedDeviceList::GetNextEntry(List, v28);
      v28 = v29;
      if ( !v29 )
        break;
      m_DeviceObject = v29->m_DeviceObject;
      if ( v29->m_State == RelatedDeviceStateNeedsReportPresent )
        v29->m_State = RelatedDeviceStateReportedPresent;
      *(_QWORD *)&v20[2 * *v20 + 2] = m_DeviceObject;
      ObfReferenceObject(m_DeviceObject);
      ++*v20;
    }
    List->m_Retries = 0;
    v22 = 0;
    v27 = 0;
  }
  else
  {
    if ( Information )
    {
      for ( i = 0; i < *Information; ++i )
        ObfDereferenceObject(*(PVOID *)&Information[2 * i + 2]);
    }
    ++List->m_Retries;
    v22 = -1073741670;
    m_Retries = List->m_Retries;
    v24 = this->m_DeviceBase;
    v25 = v24->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v25 )
      _a1 = 0LL;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x1Eu, WPP_FxPkgPnp_cpp_Traceguids, _a1, Type, 0xC000009A);
    v27 = m_Retries < 3u;
  }
  FxTransactionedList::UnlockFromEnum(List, this->m_Globals);
  if ( Information )
    ExFreePoolWithTag(Information, 0);
  if ( v27 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, Type);
  result = v22;
  Irp->m_Irp->IoStatus.Status = v22;
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)v20;
  return result;
}
