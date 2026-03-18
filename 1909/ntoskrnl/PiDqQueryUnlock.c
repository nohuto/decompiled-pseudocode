/*
 * XREFs of PiDqQueryUnlock @ 0x1405B6ADC
 * Callers:
 *     PiDqIrpCancel @ 0x14029ED80 (PiDqIrpCancel.c)
 *     PiDqDispatch @ 0x1405B6900 (PiDqDispatch.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407154B0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1407157F4 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall PiDqQueryUnlock(__int64 a1)
{
  ExReleasePushLockEx(a1 + 64, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
