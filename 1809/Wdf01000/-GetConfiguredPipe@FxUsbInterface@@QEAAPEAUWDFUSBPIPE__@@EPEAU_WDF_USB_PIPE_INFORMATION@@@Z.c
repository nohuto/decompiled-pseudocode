/*
 * XREFs of ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C0074370
 * Callers:
 *     imp_WdfUsbInterfaceGetConfiguredPipe @ 0x1C006C190 (imp_WdfUsbInterfaceGetConfiguredPipe.c)
 * Callees:
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C006E514 (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

WDFUSBPIPE__ *__fastcall FxUsbInterface::GetConfiguredPipe(
        FxUsbInterface *this,
        unsigned __int8 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  WDFUSBPIPE__ *result; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int16 v7; // cx

  if ( PipeIndex >= this->m_NumberOfConfiguredPipes )
    return 0LL;
  _mm_lfence();
  v5 = PipeIndex;
  if ( PipeInfo )
    FxUsbPipe::GetInformation(this->m_ConfiguredPipes[PipeIndex], PipeInfo);
  v6 = (unsigned __int64)this->m_ConfiguredPipes[v5];
  v7 = *(_WORD *)(v6 + 10);
  result = (WDFUSBPIPE__ *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v7 )
    return 0LL;
  return result;
}
