/*
 * XREFs of ??_EFxUsbPipeTransferContext@@UEAAPEAXI@Z @ 0x1C006EBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x1C006EAB4 (--1FxUsbPipeTransferContext@@UEAA@XZ.c)
 */

FxUsbPipeTransferContext *__fastcall FxUsbPipeTransferContext::`vector deleting destructor'(
        FxUsbPipeTransferContext *this,
        char a2)
{
  FxUsbPipeTransferContext::~FxUsbPipeTransferContext(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
