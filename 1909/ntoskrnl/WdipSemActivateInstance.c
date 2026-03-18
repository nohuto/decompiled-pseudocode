/*
 * XREFs of WdipSemActivateInstance @ 0x14074695C
 * Callers:
 *     WdipSemDisableScenario @ 0x140718294 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407467AC (WdipSemEnableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140432F98, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_140432F98, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
