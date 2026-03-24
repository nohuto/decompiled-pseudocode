/*
 * XREFs of MiReleaseKernelCfgLock @ 0x14085BF00
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x14070F394 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 */

__int64 MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140438E28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140438E28);
  KeAbPostRelease((ULONG_PTR)&qword_140438E28);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
