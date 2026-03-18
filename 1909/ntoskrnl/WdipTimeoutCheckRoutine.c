/*
 * XREFs of WdipTimeoutCheckRoutine @ 0x1406BCD90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExSetTimer @ 0x140114060 (ExSetTimer.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1406BCE80 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406BCF08 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407185C8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableContextProviders @ 0x140719160 (WdipSemDisableContextProviders.c)
 *     WdipSemLogTimeoutInformation @ 0x1408EE2C0 (WdipSemLogTimeoutInformation.c)
 */

_BOOL8 WdipTimeoutCheckRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 TimedOutInstanceForDeletion; // rdi
  __int64 v3; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  WdipSemSqmLogInflightLimitExceededDataPoints();
  if ( WdipSemTimeoutEnabled )
  {
    TimedOutInstanceForDeletion = WdipSemMarkNextTimedOutInstanceForDeletion(&WdipSemEnabledInstanceTable);
    while ( TimedOutInstanceForDeletion )
    {
      LOBYTE(v1) = 1;
      WdipSemDisableContextProviders(TimedOutInstanceForDeletion, v1);
      v5 = TimedOutInstanceForDeletion;
      v6 = WdipSemMarkNextTimedOutInstanceForDeletion(TimedOutInstanceForDeletion);
      v7 = *(_QWORD *)(TimedOutInstanceForDeletion + 32);
      v8 = TimedOutInstanceForDeletion + 16;
      TimedOutInstanceForDeletion = v6;
      WdipSemLogTimeoutInformation(v7, *(unsigned __int16 *)(v7 + 16), v8);
      WdipSemDeleteTransitionalInstance(v5);
    }
  }
  v3 = WdipSemOneSecond * (WdipSemTimeoutValue / 0xAu);
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ExSetTimer(WdipTimeoutTimer, v3, 0LL, (__int64)&WdipTimeoutTimerParameters);
}
