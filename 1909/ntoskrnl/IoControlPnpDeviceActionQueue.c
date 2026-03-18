/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140159598
 * Callers:
 *     PopDirectedDripsInitializeStartedDevices @ 0x1405B1B00 (PopDirectedDripsInitializeStartedDevices.c)
 *     PopDiagDeviceRundownWorker @ 0x14071A8F0 (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x14071AA60 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1408A3B54 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x1401595B8 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x14015965C (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
