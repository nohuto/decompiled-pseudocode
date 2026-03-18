/*
 * XREFs of imp_WdfDeviceAddQueryInterface @ 0x1C00430B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C003AE50 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C0043070 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z @ 0x1C0081D90 (-AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z.c)
 */

__int64 __fastcall imp_WdfDeviceAddQueryInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_QUERY_INTERFACE_CONFIG *InterfaceConfig)
{
  unsigned int v5; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned __int8 v8; // dl
  _INTERFACE *Interface; // r14
  unsigned __int8 SendQueryToParentStack; // r8
  unsigned __int16 v11; // r9
  FxQueryInterface *v12; // rax
  unsigned __int8 v13; // r8
  FxQueryInterface *v14; // rbp
  _INTERFACE *v15; // rax
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxDevice *pDevice; // [rsp+80h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  v5 = 0;
  m_Globals = pDevice->m_Globals;
  if ( !Device )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !InterfaceConfig )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !InterfaceConfig->InterfaceType )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    Interface = InterfaceConfig->Interface;
    if ( InterfaceConfig->Size != 48 )
    {
      v5 = -1073741820;
      WPP_IFR_SF_qddd(
        m_Globals,
        v8,
        2u,
        0xAu,
        WPP_FxQueryInterfaceAPI_cpp_Traceguids,
        Device,
        InterfaceConfig->Size,
        48,
        -1073741820);
      return v5;
    }
    SendQueryToParentStack = InterfaceConfig->SendQueryToParentStack;
    if ( SendQueryToParentStack && !FxDevice::IsPdo(pDevice) )
    {
      v5 = -1073741811;
      v11 = 11;
LABEL_14:
      WPP_IFR_SF_qL(m_Globals, 2u, 2u, v11, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, 0xC000000D);
      return v5;
    }
    if ( Interface || SendQueryToParentStack )
    {
      if ( !InterfaceConfig->ImportInterface )
        goto LABEL_23;
    }
    else if ( !InterfaceConfig->ImportInterface )
    {
      v5 = -1073741811;
      v11 = 12;
      goto LABEL_14;
    }
    if ( !InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest )
    {
      v5 = -1073741811;
      v11 = 13;
      goto LABEL_14;
    }
LABEL_23:
    if ( Interface && Interface->Size < 0x20u )
    {
      v5 = -1073741811;
      WPP_IFR_SF_qddd(
        m_Globals,
        0x20u,
        2u,
        0xEu,
        WPP_FxQueryInterfaceAPI_cpp_Traceguids,
        Device,
        Interface->Size,
        32,
        -1073741811);
    }
    else
    {
      v12 = (FxQueryInterface *)FxPoolAllocator(
                                  m_Globals,
                                  &m_Globals->FxPoolFrameworks,
                                  1u,
                                  0x38uLL,
                                  m_Globals->Tag,
                                  retaddr);
      v14 = v12;
      if ( v12 )
      {
        v12->m_Device = pDevice;
        v12->m_Interface = 0LL;
        v12->m_ProcessRequest.m_Method = 0LL;
        v12->m_Entry.Next = 0LL;
        v12->m_EmbeddedInterface = 0;
        v12->m_SendQueryToParentStack = InterfaceConfig->SendQueryToParentStack;
        v12->m_ImportInterface = InterfaceConfig->ImportInterface;
        v12->m_ProcessRequest.m_Method = InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest;
        v12->m_InterfaceType = *InterfaceConfig->InterfaceType;
      }
      else
      {
        v14 = 0LL;
      }
      if ( v14 )
      {
        if ( Interface )
        {
          v15 = (_INTERFACE *)FxPoolAllocator(
                                m_Globals,
                                &m_Globals->FxPoolFrameworks,
                                1u,
                                Interface->Size,
                                m_Globals->Tag,
                                retaddr);
          v14->m_Interface = v15;
          if ( !v15 )
          {
            v5 = -1073741670;
            WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x10u, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, 0xC000009A);
            FxQueryInterface::`scalar deleting destructor'(v14);
            return v5;
          }
          memmove(v15, Interface, Interface->Size);
          if ( !Interface->InterfaceReference )
            v14->m_Interface->InterfaceReference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
          if ( !Interface->InterfaceDereference )
            v14->m_Interface->InterfaceDereference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
        }
        FxPkgPnp::AddQueryInterface(pDevice->m_PkgPnp, v14, v13);
        return v5;
      }
      v5 = -1073741670;
      WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0xFu, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, 0xC000009A);
    }
    return v5;
  }
  return result;
}
