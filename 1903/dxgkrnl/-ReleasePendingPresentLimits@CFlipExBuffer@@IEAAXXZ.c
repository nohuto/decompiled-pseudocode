/*
 * XREFs of ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C00127F0
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C000FC24 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C0013880 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x1C0018578 (-SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z.c)
 */

void __fastcall CFlipExBuffer::ReleasePendingPresentLimits(CFlipExBuffer *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 76);
  if ( v1 > 0 )
  {
    SignalPresentLimitSemaphore(*((struct _KSEMAPHORE **)this + 37), v1);
    *((_DWORD *)this + 76) = 0;
  }
}
