/*
 * XREFs of ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0073800
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C006D7E0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C0070E9C (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C00730CC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigDescriptor(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  __int64 NumInterfaceDescriptors; // rbx
  unsigned int v6; // ecx
  _USB_CONFIGURATION_DESCRIPTOR *ConfigurationDescriptor; // rbp
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // r14
  _USB_INTERFACE_DESCRIPTOR **v10; // rax
  bool v11; // cf
  unsigned __int64 v13; // rax
  size_t v14; // r15
  _USBD_INTERFACE_LIST_ENTRY *v15; // rax
  _USBD_INTERFACE_LIST_ENTRY *v16; // rsi
  unsigned int v17; // ebx
  _USBD_INTERFACE_LIST_ENTRY *v18; // rcx
  __int64 v19; // rdx
  _USB_INTERFACE_DESCRIPTOR *v20; // rax
  _FILE_OBJECT *ConfigRequest; // rax
  _FX_URB_TYPE v22; // r9
  FX_POOL_TRACKER *v23; // rbp
  void *Caller; // [rsp+58h] [rbp+0h]

  m_Globals = this->m_Globals;
  NumInterfaceDescriptors = Params->Types.Descriptor.NumInterfaceDescriptors;
  v6 = 0;
  ConfigurationDescriptor = Params->Types.Descriptor.ConfigurationDescriptor;
  InterfaceDescriptors = Params->Types.Descriptor.InterfaceDescriptors;
  if ( !(_DWORD)NumInterfaceDescriptors )
  {
LABEL_5:
    v11 = (int)NumInterfaceDescriptors + 1 < (unsigned int)NumInterfaceDescriptors;
    if ( (int)NumInterfaceDescriptors + 1 >= (unsigned int)NumInterfaceDescriptors )
    {
      v13 = 16LL * (unsigned int)(NumInterfaceDescriptors + 1);
      if ( v13 <= 0xFFFFFFFF )
      {
        v14 = (unsigned int)v13;
        v15 = (_USBD_INTERFACE_LIST_ENTRY *)FxPoolAllocator(
                                              m_Globals,
                                              &m_Globals->FxPoolFrameworks,
                                              ExDefaultNonPagedPoolType,
                                              (unsigned int)v13,
                                              m_Globals->Tag,
                                              Caller);
        v16 = v15;
        if ( v15 )
        {
          memset(v15, 0, v14);
          if ( (_DWORD)NumInterfaceDescriptors )
          {
            v18 = v16;
            v19 = NumInterfaceDescriptors;
            do
            {
              v20 = *InterfaceDescriptors++;
              v18->InterfaceDescriptor = v20;
              ++v18;
              --v19;
            }
            while ( v19 );
          }
          if ( !ConfigurationDescriptor )
            ConfigurationDescriptor = this->m_ConfigDescriptor;
          ConfigRequest = (_FILE_OBJECT *)FxUsbCreateConfigRequest(
                                            this->m_Globals,
                                            ConfigurationDescriptor,
                                            v16,
                                            0xFFFFFFFF);
          v23 = (FX_POOL_TRACKER *)ConfigRequest;
          if ( ConfigRequest )
          {
            v17 = FxUsbDevice::SelectConfig(this, PipesAttributes, ConfigRequest, v22, 0LL);
            FxPoolFree(v23);
          }
          else
          {
            v17 = -1073741670;
          }
          FxPoolFree((FX_POOL_TRACKER *)v16);
        }
        else
        {
          v17 = -1073741670;
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x13u, WPP_FxUsbDevice_cpp_Traceguids, -1073741670);
        }
        return v17;
      }
      v11 = 1;
    }
    return v11 ? 0xC0000095 : 0;
  }
  v10 = Params->Types.Descriptor.InterfaceDescriptors;
  while ( *v10 )
  {
    ++v6;
    ++v10;
    if ( v6 >= (unsigned int)NumInterfaceDescriptors )
      goto LABEL_5;
  }
  return 3221225485LL;
}
