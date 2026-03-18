/*
 * XREFs of MiUnlockImageExtentsExclusive @ 0x14088C428
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x14088B46C (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x14088C184 (MiDeleteImageExtentList.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

__int64 MiUnlockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404645A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404645A8);
  KeAbPostRelease((ULONG_PTR)&qword_1404645A8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
