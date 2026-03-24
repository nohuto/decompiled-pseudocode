/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140135370
 * Callers:
 *     WmipRegistrationWorker @ 0x1406C6250 (WmipRegistrationWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1406DA000 (PopDiagDeviceRundownWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x140867DFC (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x140135390 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140135434 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
