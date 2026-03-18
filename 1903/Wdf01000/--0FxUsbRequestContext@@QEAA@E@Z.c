/*
 * XREFs of ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C006EE64
 * Callers:
 *     ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006EDB0 (--0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006EE04 (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??0FxUsbUrbContext@@QEAA@XZ @ 0x1C006EED8 (--0FxUsbUrbContext@@QEAA@XZ.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C0071C38 (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C0071C98 (--0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 * Callees:
 *     memset @ 0x1C001B300 (memset.c)
 */

void __fastcall FxUsbRequestContext::FxUsbRequestContext(FxUsbRequestContext *this, unsigned __int8 Type)
{
  this->m_RequestMemory = 0LL;
  this->m_RequestType = Type;
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
  this->__vftable = (FxUsbRequestContext_vtbl *)FxUsbRequestContext::`vftable';
  memset(&this->m_UsbParameters, 0, sizeof(this->m_UsbParameters));
  this->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&this->m_UsbParameters;
  this->m_CompletionParams.Type = WdfRequestTypeUsb;
  this->m_UsbParameters.Type = WdfUsbRequestTypeNoFormat;
}
