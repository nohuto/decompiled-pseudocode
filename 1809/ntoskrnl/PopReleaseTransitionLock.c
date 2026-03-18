/*
 * XREFs of PopReleaseTransitionLock @ 0x14071E724
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14056C5F0 (PopUnlockAfterSleepWorker.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x140740E30 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140745CB0 (PoInitHiberServices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x140868178 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x14071E768 (PopDirectedDripsNotify.c)
 */

LONG __fastcall PopReleaseTransitionLock(int a1)
{
  LONG result; // eax

  PopTransitionLockOwnerThread = 0LL;
  PopTransitionLockAcquireReason = 0;
  result = KeSetEvent(&PopTransitionLock, 0, 0);
  if ( a1 != 7 )
    return PopDirectedDripsNotify(14LL, 0LL);
  return result;
}
