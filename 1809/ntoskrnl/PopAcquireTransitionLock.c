/*
 * XREFs of PopAcquireTransitionLock @ 0x14071E6C8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x140740E30 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140745CB0 (PoInitHiberServices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x140868178 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x14071E768 (PopDirectedDripsNotify.c)
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
