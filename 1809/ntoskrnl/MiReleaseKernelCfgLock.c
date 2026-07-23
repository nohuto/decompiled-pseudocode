/*
 * XREFs of MiReleaseKernelCfgLock @ 0x14085D160
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140710634 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 */

__int64 MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140439EE8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140439EE8);
  KeAbPostRelease((ULONG_PTR)&qword_140439EE8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
