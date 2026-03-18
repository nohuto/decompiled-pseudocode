/*
 * XREFs of ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0075E28
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C006D7E0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C0070E9C (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C00730CC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C00744BC (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigSingle(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipeAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // rsi
  unsigned __int8 m_NumInterfaces; // al
  const void *_a1; // rbx
  __int64 v10; // r11
  unsigned __int16 m_ObjectSize; // ax
  const void *v12; // rbx
  _FILE_OBJECT *ConfigRequest; // rax
  _FX_URB_TYPE v14; // r9
  FX_POOL_TRACKER *v15; // rbp
  int v16; // esi
  FxUsbInterface *v17; // rdx
  unsigned __int16 v18; // cx
  _USB_INTERFACE_DESCRIPTOR **v19; // rdx
  _USBD_INTERFACE_LIST_ENTRY listEntry[2]; // [rsp+40h] [rbp-38h] BYREF

  p_m_Globals = &this->m_Globals;
  Params->Types.Descriptor.ConfigurationDescriptor = 0LL;
  Params->Types.Descriptor.InterfaceDescriptors = 0LL;
  m_NumInterfaces = this->m_NumInterfaces;
  if ( m_NumInterfaces > 1u )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qdd(*p_m_Globals, 2u, 0xEu, 0x1Bu, WPP_FxusbDeviceKm_cpp_Traceguids, _a1, m_NumInterfaces, 0xC000000D);
    return 3221225485LL;
  }
  memset(listEntry, 0, sizeof(listEntry));
  listEntry[0].InterfaceDescriptor = FxUsbInterface::GetSettingDescriptor(*this->m_Interfaces, 0);
  if ( !listEntry[0].InterfaceDescriptor )
  {
    m_ObjectSize = this->m_ObjectSize;
    v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v12 = 0LL;
    WPP_IFR_SF_qL(
      *p_m_Globals,
      2u,
      0xEu,
      0x1Cu,
      WPP_FxusbDeviceKm_cpp_Traceguids,
      v12,
      *(unsigned __int8 *)(*(_QWORD *)v10 + 146LL));
    return 3221225485LL;
  }
  ConfigRequest = (_FILE_OBJECT *)FxUsbCreateConfigRequest(
                                    *p_m_Globals,
                                    this->m_ConfigDescriptor,
                                    listEntry,
                                    0xFFFFFFFF);
  v15 = (FX_POOL_TRACKER *)ConfigRequest;
  if ( ConfigRequest )
  {
    v16 = FxUsbDevice::SelectConfig(this, PipeAttributes, ConfigRequest, v14, 0LL);
    if ( v16 >= 0 )
    {
      Params->Types.SingleInterface.NumberConfiguredPipes = (*this->m_Interfaces)->m_NumberOfConfiguredPipes;
      v17 = *this->m_Interfaces;
      v18 = v17->m_ObjectSize;
      v19 = (_USB_INTERFACE_DESCRIPTOR **)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v18 )
        v19 = 0LL;
      Params->Types.Descriptor.InterfaceDescriptors = v19;
    }
    FxPoolFree(v15);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v16;
}
