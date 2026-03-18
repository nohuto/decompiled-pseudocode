/*
 * XREFs of MiReleaseKernelCfgLock @ 0x140898134
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140748A78 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

__int64 MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140464540, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140464540);
  KeAbPostRelease((ULONG_PTR)&qword_140464540);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
