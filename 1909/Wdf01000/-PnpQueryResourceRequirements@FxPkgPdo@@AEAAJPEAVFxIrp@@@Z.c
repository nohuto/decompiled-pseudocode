/*
 * XREFs of ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008E7CC
 * Callers:
 *     ?_PnpQueryResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C008EBC0 (-_PnpQueryResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C001598C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0018120 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0063D20 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0064A90 (-Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C008EAC4 (-_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryResourceRequirements(FxPkgPdo *this, _FX_DRIVER_GLOBALS *Irp)
{
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // r15
  signed int Flink; // ebx
  _SINGLE_LIST_ENTRY *i; // rsi
  NTSTATUS _a3; // eax
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a1; // rdx
  _WDF_OBJECT_ATTRIBUTES *v10; // r8
  unsigned __int8 v11; // r9
  FxIoResReqList *v12; // rsi
  FxDeviceBase *v13; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v16; // rcx
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // rax
  FxIoResReqList *pIoResReqList; // [rsp+70h] [rbp+8h] BYREF
  WDFIORESREQLIST__ *reqlist; // [rsp+80h] [rbp+18h] BYREF

  p_m_DeviceInterfaceLock = &this->m_DeviceInterfaceLock;
  pIoResReqList = 0LL;
  Flink = 0;
  FxWaitLockInternal::AcquireLock(&this->m_DeviceInterfaceLock, Irp, 0LL);
  LOBYTE(this->m_DeviceBase[1].m_ChildEntry.Blink) = 1;
  for ( i = this->m_DeviceInterfaceHead.Next; i; i = i->Next )
  {
    if ( i[-1].Next )
    {
      RtlFreeUnicodeString((PUNICODE_STRING)&i[-2]);
      i[-2].Next = 0LL;
      i[-1].Next = 0LL;
    }
    _a3 = FxDeviceInterface::Register((FxDeviceInterface *)&i[-6], this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
    Flink = _a3;
    if ( _a3 < 0 )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qid(
        this->m_Globals,
        2u,
        0xCu,
        0xAu,
        WPP_FxPkgPdoKM_cpp_Traceguids,
        _a1,
        (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3);
      break;
    }
  }
  p_m_DeviceInterfaceLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_DeviceInterfaceLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  if ( Flink >= 0 )
  {
    if ( this->m_DeviceResourceRequirementsQuery.m_Method )
    {
      Flink = FxIoResReqList::_CreateAndInit(&pIoResReqList, this->m_Globals, v10, v11);
      if ( Flink >= 0 )
      {
        v12 = pIoResReqList;
        FxObject::Commit(pIoResReqList, 0LL, (void **)&reqlist, 0LL, 1u);
        v13 = this->m_DeviceBase;
        m_Method = this->m_DeviceResourceRequirementsQuery.m_Method;
        m_ObjectSize = v13->m_ObjectSize;
        if ( m_Method )
        {
          v16 = (unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !m_ObjectSize )
            v16 = 0LL;
          Flink = m_Method((WDFDEVICE__ *)v16, reqlist);
        }
        else
        {
          Flink = 0;
        }
        if ( Flink >= 0 )
        {
          if ( v12->m_Count )
          {
            WdmList = FxIoResReqList::CreateWdmList(v12);
            if ( WdmList )
              Irp->Linkage.Flink[3].Blink = (_LIST_ENTRY *)WdmList;
            else
              Flink = -1073741670;
          }
          else
          {
            Flink = (signed int)Irp->Linkage.Flink[3].Flink;
          }
        }
        v12->DeleteObject(v12);
      }
    }
  }
  return FxPkgPnp::CompletePnpRequest(this, (FxIrp *)Irp, Flink);
}
