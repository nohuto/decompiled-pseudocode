/*
 * XREFs of PspReferenceSystemDll @ 0x140677B48
 * Callers:
 *     DbgkCreateThread @ 0x1405F7028 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1406779CC (PspMapSystemDll.c)
 *     MmInitSystemDll @ 0x1409C4738 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x1409F8288 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFF4 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 */

ULONG_PTR __fastcall PspReferenceSystemDll(signed __int64 *a1)
{
  ULONG_PTR v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp

  v2 = ObFastReferenceObject(a1);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
    v2 = ObFastReferenceObjectLocked(a1);
    if ( _InterlockedCompareExchange64(a1 + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 1);
    KeAbPostRelease((ULONG_PTR)(a1 + 1));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  return v2;
}
