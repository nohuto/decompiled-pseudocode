/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140135440
 * Callers:
 *     WmipRegistrationWorker @ 0x1406C74F0 (WmipRegistrationWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1406DB2A0 (PopDiagDeviceRundownWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x14086905C (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x140135460 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140135504 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
