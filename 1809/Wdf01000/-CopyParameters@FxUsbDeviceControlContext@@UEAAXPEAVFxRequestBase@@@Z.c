/*
 * XREFs of ?CopyParameters@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0071CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxUsbDeviceControlContext::CopyParameters(FxUsbDeviceControlContext *this, FxRequestBase *Request)
{
  _URB_CONTROL_TRANSFER *m_Urb; // rdx

  m_Urb = this->m_Urb;
  this->m_CompletionParams.IoStatus.Information = m_Urb->TransferBufferLength;
  this->m_UsbParameters.Parameters.DeviceControlTransfer.Length = m_Urb->TransferBufferLength;
  this->m_UsbParameters.UsbdStatus = this->GetUsbdStatus(this);
}
