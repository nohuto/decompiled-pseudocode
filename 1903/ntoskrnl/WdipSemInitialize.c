/*
 * XREFs of WdipSemInitialize @ 0x14076B3A0
 * Callers:
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     WdipSemCleanStart @ 0x14076B3F4 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x14076CEB8 (WdipSemInitializeGlobalState.c)
 */

_QWORD *WdipSemInitialize()
{
  struct _KTHREAD *CurrentThread; // rax

  WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  WdipSemCleanStart();
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
