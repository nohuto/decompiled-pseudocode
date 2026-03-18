/*
 * XREFs of ??_EFxUsbPipeRequestContext@@UEAAPEAXI@Z @ 0x1C006EB90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1C006EA54 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 */

FxUsbPipeRequestContext *__fastcall FxUsbPipeRequestContext::`vector deleting destructor'(
        FxUsbPipeRequestContext *this,
        char a2)
{
  FxUsbPipeRequestContext::~FxUsbPipeRequestContext(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
