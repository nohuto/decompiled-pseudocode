/*
 * XREFs of PpProfileCancelTransitioningDock @ 0x14086D268
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1407060CC (PipProcessEnumeratedChildDevice.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeAcquireGuardedMutex @ 0x14009C4C0 (KeAcquireGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     PiProfileSendHardwareProfileCancel @ 0x14086CE20 (PiProfileSendHardwareProfileCancel.c)
 *     PiProfileSendHardwareProfileCommit @ 0x14086CE48 (PiProfileSendHardwareProfileCommit.c)
 *     PiProfileUpdateDeviceTree @ 0x14086CE70 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14086CFBC (PnpProfileUpdateHardwareProfile.c)
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
