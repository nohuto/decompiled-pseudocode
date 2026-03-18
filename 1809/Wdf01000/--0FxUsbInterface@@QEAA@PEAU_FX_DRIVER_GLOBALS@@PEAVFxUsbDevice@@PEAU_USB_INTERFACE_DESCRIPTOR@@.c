/*
 * XREFs of ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C0073D00
 * Callers:
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C0071E14 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000E148 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

void __fastcall FxUsbInterface::FxUsbInterface(
        FxUsbInterface *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxUsbDevice *UsbDevice,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1204u, 0x98u, FxDriverGlobals);
  this->m_UsbDevice = UsbDevice;
  this->__vftable = (FxUsbInterface_vtbl *)FxUsbInterface::`vftable';
  FxObject::AddRef(UsbDevice, this, 35, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbinterface.cpp");
  this->m_InterfaceNumber = InterfaceDescriptor->bInterfaceNumber;
  this->m_Protocol = InterfaceDescriptor->bInterfaceProtocol;
  this->m_Class = InterfaceDescriptor->bInterfaceClass;
  this->m_SubClass = InterfaceDescriptor->bInterfaceSubClass;
  this->m_ObjectFlags |= 2u;
  this->m_CurAlternateSetting = 0;
  *(_WORD *)&this->m_NumSettings = 0;
  this->m_ConfiguredPipes = 0LL;
  this->m_Settings = 0LL;
}
