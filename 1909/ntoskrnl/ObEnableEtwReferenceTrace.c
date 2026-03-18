/*
 * XREFs of ObEnableEtwReferenceTrace @ 0x14089EA4C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406E8458 (EtwpEnableKernelTrace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

__int64 ObEnableEtwReferenceTrace()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  ObpTraceFlags |= 4u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
