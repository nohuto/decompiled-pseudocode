/*
 * XREFs of PpProfileCancelTransitioningDock @ 0x14086C968
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x140707EAC (PipProcessEnumeratedChildDevice.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeAcquireGuardedMutex @ 0x1400EF450 (KeAcquireGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1401081E0 (KeReleaseSemaphore.c)
 *     PiProfileSendHardwareProfileCancel @ 0x14086C520 (PiProfileSendHardwareProfileCancel.c)
 *     PiProfileSendHardwareProfileCommit @ 0x14086C548 (PiProfileSendHardwareProfileCommit.c)
 *     PiProfileUpdateDeviceTree @ 0x14086C570 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14086C6BC (PnpProfileUpdateHardwareProfile.c)
 */

void __fastcall PpProfileCancelTransitioningDock(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  KeAcquireGuardedMutex(&PiProfileDeviceListLock);
  *(_DWORD *)(a1 + 568) = 1;
  LODWORD(a1) = _InterlockedExchangeAdd(&PiProfileDevicesInTransition, 0xFFFFFFFF);
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
  if ( (_DWORD)a1 == 1 )
  {
    if ( (int)PnpProfileUpdateHardwareProfile((__int64)&v3) >= 0 && (_BYTE)v3 )
    {
      PiProfileSendHardwareProfileCommit();
      PiProfileUpdateDeviceTree();
    }
    else
    {
      PiProfileSendHardwareProfileCancel();
    }
    KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
  }
}
