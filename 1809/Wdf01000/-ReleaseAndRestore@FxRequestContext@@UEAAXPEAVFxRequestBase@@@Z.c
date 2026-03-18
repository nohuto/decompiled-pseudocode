/*
 * XREFs of ?ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0093990
 * Callers:
 *     ?ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C006FC70 (-ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxUsbUrbContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C006FD00 (-ReleaseAndRestore@FxUsbUrbContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0073040 (-ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?FreeMdls@FxRequestBase@@QEAAXXZ @ 0x1C00938B8 (-FreeMdls@FxRequestBase@@QEAAXXZ.c)
 */

void __fastcall FxRequestContext::ReleaseAndRestore(FxRequestContext *this, FxRequestBase *Request)
{
  IFxMemory *m_RequestMemory; // rcx

  FxRequestBase::FreeMdls(Request);
  m_RequestMemory = this->m_RequestMemory;
  if ( m_RequestMemory )
  {
    m_RequestMemory->Release(
      m_RequestMemory,
      this,
      112,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    this->m_RequestMemory = 0LL;
  }
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
}
