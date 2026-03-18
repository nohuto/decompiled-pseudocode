/*
 * XREFs of PiDqQueryUnlock @ 0x1405B66FC
 * Callers:
 *     PiDqIrpCancel @ 0x14029F020 (PiDqIrpCancel.c)
 *     PiDqDispatch @ 0x1405B6520 (PiDqDispatch.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407136D0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x140713A14 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall PiDqQueryUnlock(__int64 a1)
{
  ExReleasePushLockEx(a1 + 64, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
