/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x1407185C8
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1406BCD90 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140718294 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407467AC (WdipSemEnableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     WdipSemFastFree @ 0x140718824 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140432F98, 0LL);
  v3 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  --dword_140432F90;
  ExReleasePushLockEx((ULONG_PTR)&qword_140432F98, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return WdipSemFastFree(3LL, a1);
}
