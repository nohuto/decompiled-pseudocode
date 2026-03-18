/*
 * XREFs of ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0007494
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C0007578 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C001A480 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x1C0017F78 (-SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z.c)
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
