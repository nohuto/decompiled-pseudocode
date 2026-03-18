/*
 * XREFs of WdipSemActivateInstance @ 0x140717A28
 * Callers:
 *     WdipSemDisableScenario @ 0x1407174E4 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x14071776C (WdipSemEnableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *__fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14040CF38, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_14040CF38, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
