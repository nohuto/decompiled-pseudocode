/*
 * XREFs of MmCheckProcessShadow @ 0x140137170
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1400CCBA0 (MiCheckProcessShadow.c)
 */

__int64 MmCheckProcessShadow()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rdi
  unsigned __int8 v2; // bl
  __int64 v3; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1404659C0, 0LL);
  Process += 1280LL;
  v2 = MiLockWorkingSetShared(Process);
  v3 = MiCheckProcessShadow(Process, 0x1Du);
  MiUnlockWorkingSetShared(Process, v2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1404659C0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1404659C0);
  KeAbPostRelease((ULONG_PTR)&qword_1404659C0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v3;
}
