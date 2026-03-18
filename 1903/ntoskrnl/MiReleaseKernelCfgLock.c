/*
 * XREFs of MiReleaseKernelCfgLock @ 0x140898914
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140746B78 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

__int64 MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140464840, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140464840);
  KeAbPostRelease((ULONG_PTR)&qword_140464840);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
