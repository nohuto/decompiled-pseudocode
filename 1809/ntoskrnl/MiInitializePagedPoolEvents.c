/*
 * XREFs of MiInitializePagedPoolEvents @ 0x1409BD640
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14072B99C (MiInitializeMemoryEvents.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x1400B8AA0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     MiFreePoolPagesLeft @ 0x1400EF564 (MiFreePoolPagesLeft.c)
 */

__int64 MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v1; // rsi
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043AF58, 0LL);
  v1 = MiFreePoolPagesLeft(6);
  if ( v1 < qword_140438AC8 )
    KeResetEvent(qword_14043CA38);
  else
    KeSetEvent(qword_14043CA38, 0, 0);
  if ( v1 <= qword_140438AC0 )
    KeSetEvent(qword_14043CA30, 0, 0);
  else
    KeResetEvent(qword_14043CA30);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043AF58, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043AF58);
  KeAbPostRelease((ULONG_PTR)&qword_14043AF58);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
