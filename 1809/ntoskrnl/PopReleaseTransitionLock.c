/*
 * XREFs of PopReleaseTransitionLock @ 0x14071F9A4
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14056D5F0 (PopUnlockAfterSleepWorker.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x140742000 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140746E80 (PoInitHiberServices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x1408693B8 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x14071F9E8 (PopDirectedDripsNotify.c)
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
