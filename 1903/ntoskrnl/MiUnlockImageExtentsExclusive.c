/*
 * XREFs of MiUnlockImageExtentsExclusive @ 0x14088CC08
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x14088BC4C (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x14088C964 (MiDeleteImageExtentList.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

__int64 MiUnlockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404648A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404648A8);
  KeAbPostRelease((ULONG_PTR)&qword_1404648A8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
