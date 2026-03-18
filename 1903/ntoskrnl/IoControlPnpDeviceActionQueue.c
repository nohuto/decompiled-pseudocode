/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140158EF8
 * Callers:
 *     PopDirectedDripsInitializeStartedDevices @ 0x1405B1AEC (PopDirectedDripsInitializeStartedDevices.c)
 *     PopDiagDeviceRundownWorker @ 0x140718B00 (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x140718C70 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1408A4314 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x140158F18 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140158FBC (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
