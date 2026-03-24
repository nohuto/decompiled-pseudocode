/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x1407168D4
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1406BF450 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x1407174C4 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x14071774C (WdipSemEnableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemFastFree @ 0x140716B30 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14040CAF8, 0LL);
  v3 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  --dword_14040CAF0;
  ExReleasePushLockEx((ULONG_PTR)&qword_14040CAF8, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return WdipSemFastFree(3LL, a1);
}
