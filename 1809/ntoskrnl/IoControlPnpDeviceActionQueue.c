/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140135350
 * Callers:
 *     WmipRegistrationWorker @ 0x1406C6270 (WmipRegistrationWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1406DA020 (PopDiagDeviceRundownWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x140867E1C (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x140135370 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140135414 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
