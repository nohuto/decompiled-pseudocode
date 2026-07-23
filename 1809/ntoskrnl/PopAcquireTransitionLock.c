/*
 * XREFs of PopAcquireTransitionLock @ 0x14071F948
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x140742000 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140746E80 (PoInitHiberServices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x1408693B8 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x14071F9E8 (PopDirectedDripsNotify.c)
 */

int __fastcall PopAcquireTransitionLock(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 != 7 )
    PopDirectedDripsNotify(13LL, 0LL);
  LODWORD(CurrentThread) = KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
  PopTransitionLockAcquireReason = a1;
  if ( a1 != 1 )
  {
    CurrentThread = KeGetCurrentThread();
    PopTransitionLockOwnerThread = (__int64)CurrentThread;
  }
  return (int)CurrentThread;
}
