/*
 * XREFs of ?SignalPresentLimitSemaphore@CFlipExBuffer@@UEBAXXZ @ 0x1C0017F40
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x1C0017F78 (-SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z.c)
 */

void __fastcall CFlipExBuffer::SignalPresentLimitSemaphore(struct _KSEMAPHORE **this)
{
  if ( *((int *)this + 76) > 0 )
  {
    SignalPresentLimitSemaphore(this[37], 1);
    --*((_DWORD *)this + 76);
  }
}
