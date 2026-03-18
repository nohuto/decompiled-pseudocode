/*
 * XREFs of ??0FxIoContext@@QEAA@XZ @ 0x1C000E834
 * Callers:
 *     FxIoTargetSendIoctl @ 0x1C000E5D8 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C00649D0 (FxIoTargetSendIo.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0069CD4 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C0072610 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0075A78 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 */

void __fastcall FxIoContext::FxIoContext(FxIoContext *this)
{
  this->m_RequestType = 1;
  this->m_RequestMemory = 0LL;
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
  this->__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  this->m_BufferToFree = 0LL;
  this->m_OriginalSystemBuffer = 0LL;
  this->m_OriginalUserBuffer = 0LL;
  this->m_MdlToFree = 0LL;
  this->m_OriginalMdl = 0LL;
  this->m_BufferToFreeLength = 0LL;
  this->m_MdlToFreeSize = 0LL;
  *(_WORD *)&this->m_CopyBackToBuffer = 0;
  this->m_RestoreState = 0;
  this->m_OtherMemory = 0LL;
}
