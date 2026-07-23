/*
 * XREFs of MmCheckProcessShadow @ 0x140135CD0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 */

__int64 MmCheckProcessShadow()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rdi
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14043B068, 0LL);
  Process += 1280LL;
  v2 = MiLockWorkingSetShared(Process);
  v5 = MiCheckProcessShadow(Process, 0x1Du, v3, v4);
  MiUnlockWorkingSetShared(Process, v2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14043B068, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14043B068);
  KeAbPostRelease((ULONG_PTR)&qword_14043B068);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v5;
}
