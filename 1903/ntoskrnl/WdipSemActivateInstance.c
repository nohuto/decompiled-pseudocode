/*
 * XREFs of WdipSemActivateInstance @ 0x140744A5C
 * Callers:
 *     WdipSemDisableScenario @ 0x1407164A4 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407448AC (WdipSemEnableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140435238, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_140435238, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
