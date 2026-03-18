/*
 * XREFs of ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C007486C
 * Callers:
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C006C4D0 (imp_WdfUsbInterfaceSelectSetting.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C007429C (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C00744F0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 */

__int64 __fastcall FxUsbInterface::SelectSettingByDescriptor(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  unsigned __int8 bInterfaceNumber; // al
  _FX_DRIVER_GLOBALS **p_m_Globals; // r11
  unsigned __int8 m_InterfaceNumber; // cl
  int _a4; // edx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rbx
  _URB *v13; // rax
  _URB *v14; // rsi
  unsigned int v15; // ebx
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( this->m_ConfiguredPipes && this->m_CurAlternateSetting == InterfaceDescriptor->bAlternateSetting )
    return 0LL;
  bInterfaceNumber = InterfaceDescriptor->bInterfaceNumber;
  p_m_Globals = &this->m_Globals;
  m_InterfaceNumber = this->m_InterfaceNumber;
  if ( bInterfaceNumber == m_InterfaceNumber )
  {
    v13 = (_URB *)FxPoolAllocator(
                    *p_m_Globals,
                    &(*p_m_Globals)->FxPoolFrameworks,
                    ExDefaultNonPagedPoolType,
                    24LL * InterfaceDescriptor->bNumEndpoints + 56,
                    (*p_m_Globals)->Tag,
                    retaddr);
    v14 = v13;
    if ( v13 )
    {
      FxUsbInterface::FormatSelectSettingUrb(
        this,
        v13,
        InterfaceDescriptor->bNumEndpoints,
        InterfaceDescriptor->bAlternateSetting);
      v15 = FxUsbInterface::SelectSetting(this, PipesAttributes, v14);
      FxPoolFree((FX_POOL_TRACKER *)v14);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v15;
  }
  else
  {
    _a4 = bInterfaceNumber;
    m_ObjectSize = this->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qddd(
      *p_m_Globals,
      _a4,
      0xEu,
      0xEu,
      WPP_FxUsbInterface_cpp_Traceguids,
      _a2,
      m_InterfaceNumber,
      _a4,
      -1073741811);
    return 3221225485LL;
  }
}
