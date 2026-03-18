/*
 * XREFs of imp_WdfDeviceCreateDeviceInterface @ 0x1C005F570
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000C99C (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C001563C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0017EE4 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C005F51C (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0063DE0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00643FC (-Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateDeviceInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 result; // rax
  unsigned int _a2; // ebx
  unsigned __int16 v10; // r9
  _FX_DRIVER_GLOBALS *v11; // rdx
  FxDeviceInterface *v12; // rbx
  FxPkgPnp *m_PkgPnp; // rbp
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _SINGLE_LIST_ENTRY *p_m_DeviceInterfaceHead; // rcx
  _SINGLE_LIST_ENTRY *i; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( !ReferenceString || (result = FxValidateUnicodeString(m_Globals, ReferenceString), (int)result >= 0) )
    {
      if ( pDevice->m_Legacy )
      {
        _a2 = -1073741808;
        v10 = 10;
LABEL_8:
        WPP_IFR_SF_qL(m_Globals, 2u, 2u, v10, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, _a2);
        return _a2;
      }
      v12 = (FxDeviceInterface *)FxPoolAllocator(
                                   m_Globals,
                                   &m_Globals->FxPoolFrameworks,
                                   1u,
                                   0x40uLL,
                                   m_Globals->Tag,
                                   retaddr);
      if ( v12 )
      {
        *(_QWORD *)&v12->m_InterfaceClassGUID.Data1 = 0LL;
        *(_QWORD *)v12->m_InterfaceClassGUID.Data4 = 0LL;
        *(_QWORD *)&v12->m_SymbolicLinkName.Length = 0LL;
        v12->m_SymbolicLinkName.Buffer = 0LL;
        *(_QWORD *)&v12->m_ReferenceString.Length = 0LL;
        v12->m_ReferenceString.Buffer = 0LL;
        v12->m_Entry.Next = 0LL;
        v12->m_State = 0;
      }
      else
      {
        v12 = 0LL;
      }
      if ( !v12 )
      {
        _a2 = -1073741670;
        v10 = 11;
        goto LABEL_8;
      }
      v12->m_InterfaceClassGUID = *InterfaceClassGUID;
      if ( ReferenceString )
        LODWORD(ReferenceString) = FxDuplicateUnicodeString(m_Globals, ReferenceString, &v12->m_ReferenceString);
      if ( (int)ReferenceString >= 0 )
      {
        m_PkgPnp = pDevice->m_PkgPnp;
        FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v11, 0LL);
        SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(pDevice);
        if ( SafePhysicalDevice )
          LODWORD(ReferenceString) = FxDeviceInterface::Register(v12, SafePhysicalDevice);
        else
          LODWORD(ReferenceString) = 0;
        if ( (int)ReferenceString >= 0 )
        {
          p_m_DeviceInterfaceHead = &m_PkgPnp->m_DeviceInterfaceHead;
          for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
            p_m_DeviceInterfaceHead = i;
          p_m_DeviceInterfaceHead->Next = &v12->m_Entry;
        }
        m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = 0LL;
        KeSetEvent(&m_PkgPnp->m_DeviceInterfaceLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
      }
      else
      {
        WPP_IFR_SF_qL(
          m_Globals,
          2u,
          2u,
          0xCu,
          WPP_FxDeviceInterfaceAPI_cpp_Traceguids,
          Device,
          (unsigned int)ReferenceString);
      }
      if ( (int)ReferenceString < 0 )
        FxDeviceInterface::`scalar deleting destructor'(v12);
      return (unsigned int)ReferenceString;
    }
  }
  return result;
}
