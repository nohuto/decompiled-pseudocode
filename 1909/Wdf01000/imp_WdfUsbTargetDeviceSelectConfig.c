/*
 * XREFs of imp_WdfUsbTargetDeviceSelectConfig @ 0x1C006DDE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C002F8AC (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00308E0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0030A24 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qqddd @ 0x1C005B89C (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qqDLd @ 0x1C006CE2C (WPP_IFR_SF_qqDLd.c)
 *     WPP_IFR_SF_qqLd @ 0x1C006CF68 (WPP_IFR_SF_qqLd.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C0072C88 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C00736AC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0073DE0 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007612C (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007640C (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSelectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  _FX_DRIVER_GLOBALS *DriverName; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  FxUsbDevice *v14; // r10
  unsigned __int8 m_NumInterfaces; // dl
  unsigned int v16; // esi
  _USB_CONFIGURATION_DESCRIPTOR *_a3; // rax
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // rcx
  const void *v20; // r10
  unsigned __int8 NumberConfiguredPipes; // cl
  const void *v22; // r10
  unsigned int v23; // ebx
  _USB_INTERFACE_DESCRIPTOR **v24; // r14
  unsigned __int8 v25; // r8
  const void *v26; // rax
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+80h] [rbp+8h] BYREF
  FxUsbInterface *pUsbInterface; // [rsp+98h] [rbp+20h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  if ( !Params )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( Params->Size != 32 )
    {
      v10 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, 0x20u, 0xEu, 0xFu, WPP_FxUsbDeviceAPI_cpp_Traceguids, Params->Size, 32, -1073741820);
      return v10;
    }
    if ( (unsigned int)(Params->Type - 1) > 5 )
    {
      v10 = -1073741811;
      WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbDeviceAPI_cpp_Traceguids, 32, -1073741811);
      return v10;
    }
    result = FxValidateObjectAttributes(m_Globals, PipesAttributes, 1);
    if ( (int)result < 0 )
      return result;
    v14 = pUsbDevice;
    if ( pUsbDevice->m_MismatchedInterfacesInConfigDescriptor )
    {
      v10 = -1073741808;
      WPP_IFR_SF_qDd(
        m_Globals,
        v11,
        0xEu,
        0x12u,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        UsbDevice,
        Params->Type,
        0xC0000010);
      return v10;
    }
    m_NumInterfaces = pUsbDevice->m_NumInterfaces;
    if ( !m_NumInterfaces )
    {
      WPP_IFR_SF_qDd(m_Globals, 0, 0xEu, 0x13u, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, Params->Type, 0);
      return 0LL;
    }
    if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeDeconfig )
      return (unsigned int)FxUsbDevice::Deconfig(pUsbDevice);
    if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeSingleInterface )
    {
      if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
      {
        if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeInterfacesPairs )
        {
          if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeInterfacesDescriptor )
          {
            InterfaceDescriptors = Params->Types.Descriptor.InterfaceDescriptors;
            if ( !InterfaceDescriptors || !Params->Types.Descriptor.NumInterfaceDescriptors )
            {
              v16 = -1073741811;
              WPP_IFR_SF_qqDLd(
                m_Globals,
                m_NumInterfaces,
                v12,
                v13,
                _a1,
                UsbDevice,
                InterfaceDescriptors,
                Params->Types.Descriptor.NumInterfaceDescriptors,
                5u);
              return v16;
            }
            return (unsigned int)FxUsbDevice::SelectConfigDescriptor(pUsbDevice, PipesAttributes, Params);
          }
          else
          {
            if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeUrb )
              return (unsigned int)-1073741811;
            _a3 = Params->Types.Descriptor.ConfigurationDescriptor;
            if ( !_a3 || _a3->wTotalLength || *(_WORD *)&_a3->bLength < 0x40u )
            {
              v16 = -1073741811;
              WPP_IFR_SF_qqLd(
                m_Globals,
                m_NumInterfaces,
                0xEu,
                0x15u,
                WPP_FxUsbDeviceAPI_cpp_Traceguids,
                UsbDevice,
                _a3,
                6u,
                -1073741811);
              return v16;
            }
            return (unsigned int)FxUsbDevice::SelectConfig(
                                   pUsbDevice,
                                   PipesAttributes,
                                   Params->Types.Urb.Urb,
                                   (_FX_URB_TYPE)v13,
                                   0LL);
          }
        }
        if ( !Params->Types.Descriptor.InterfaceDescriptors )
        {
          v16 = -1073741811;
          if ( pUsbDevice->m_ObjectSize )
            v20 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v20 = 0LL;
          WPP_IFR_SF_qL(m_Globals, 2u, 0xEu, 0x16u, WPP_FxUsbDeviceAPI_cpp_Traceguids, v20, 0xC000000D);
          return v16;
        }
        NumberConfiguredPipes = Params->Types.SingleInterface.NumberConfiguredPipes;
        if ( NumberConfiguredPipes != m_NumInterfaces )
        {
          v16 = -1073741811;
          if ( pUsbDevice->m_ObjectSize )
            v22 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v22 = 0LL;
          WPP_IFR_SF_qddd(
            m_Globals,
            m_NumInterfaces,
            0xEu,
            0x17u,
            WPP_FxUsbDeviceAPI_cpp_Traceguids,
            v22,
            NumberConfiguredPipes,
            m_NumInterfaces,
            -1073741811);
          return v16;
        }
      }
      v23 = 0;
      if ( Params->Types.SingleInterface.NumberConfiguredPipes )
      {
        while ( 1 )
        {
          v24 = &Params->Types.Descriptor.InterfaceDescriptors[2 * v23];
          FxObjectHandleGetPtr(DriverName, (unsigned __int64)*v24, 0x1204u, (void **)&pUsbInterface);
          v25 = *((_BYTE *)v24 + 8);
          if ( v25 >= pUsbInterface->m_NumSettings )
            break;
          if ( ++v23 >= Params->Types.SingleInterface.NumberConfiguredPipes )
          {
            v14 = pUsbDevice;
            return (unsigned int)FxUsbDevice::SelectConfigMulti(v14, PipesAttributes, Params);
          }
        }
        if ( pUsbDevice->m_ObjectSize )
          v26 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v26 = 0LL;
        v10 = -1073741811;
        WPP_IFR_SF_qqddd(
          m_Globals,
          pUsbInterface->m_NumSettings - 1,
          0xEu,
          0x18u,
          WPP_FxUsbDeviceAPI_cpp_Traceguids,
          v26,
          *v24,
          v25,
          pUsbInterface->m_NumSettings - 1,
          -1073741811);
        return v10;
      }
      return (unsigned int)FxUsbDevice::SelectConfigMulti(v14, PipesAttributes, Params);
    }
    return (unsigned int)FxUsbDevice::SelectConfigSingle(pUsbDevice, PipesAttributes, Params);
  }
  return result;
}
