/*
 * XREFs of ??_GFxUsbDeviceStringContext@@UEAAPEAXI@Z @ 0x1C0071950
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     USBD_UrbFree @ 0x1C0092360 (USBD_UrbFree.c)
 */

FxUsbDeviceStringContext *__fastcall FxUsbDeviceStringContext::`scalar deleting destructor'(
        FxUsbDeviceStringContext *this,
        char a2)
{
  FX_POOL_TRACKER *m_StringDescriptor; // rcx
  _URB *m_Urb; // rdx

  this->__vftable = (FxUsbDeviceStringContext_vtbl *)FxUsbDeviceStringContext::`vftable';
  m_StringDescriptor = (FX_POOL_TRACKER *)this->m_StringDescriptor;
  if ( m_StringDescriptor )
  {
    FxPoolFree(m_StringDescriptor);
    this->m_StringDescriptor = 0LL;
  }
  m_Urb = (_URB *)this->m_Urb;
  if ( m_Urb && m_Urb != (_URB *)&this->m_UrbLegacy )
    USBD_UrbFree(this->m_USBDHandle, m_Urb);
  this->m_Urb = 0LL;
  this->m_USBDHandle = 0LL;
  this->__vftable = (FxUsbDeviceStringContext_vtbl *)FxRequestContext::`vftable';
  if ( (a2 & 1) != 0 )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
