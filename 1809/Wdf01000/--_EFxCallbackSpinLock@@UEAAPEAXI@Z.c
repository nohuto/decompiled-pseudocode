/*
 * XREFs of ??_EFxCallbackSpinLock@@UEAAPEAXI@Z @ 0x1C004F170
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x1C004F048 (--1FxCallbackSpinLock@@UEAA@XZ.c)
 */

FxCallbackSpinLock *__fastcall FxCallbackSpinLock::`vector deleting destructor'(FxCallbackSpinLock *this, char a2)
{
  FxCallbackSpinLock::~FxCallbackSpinLock(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
