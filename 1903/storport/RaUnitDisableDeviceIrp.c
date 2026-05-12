/*
 * XREFs of RaUnitDisableDeviceIrp @ 0x1C0044408
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C00218DC (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00079A0 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0015AD4 (RaUnitWaitForRemoveLock.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001C714 (RaidUnitUnRegisterInterfaces.c)
 *     RaidUnitCancelPendingRequests @ 0x1C001C8B4 (RaidUnitCancelPendingRequests.c)
 */

__int64 __fastcall RaUnitDisableDeviceIrp(__int64 a1, IRP *a2)
{
  unsigned int v3; // eax
  unsigned int v5; // eax

  v3 = *(_DWORD *)(a1 + 48) - 5;
  *(_DWORD *)(a1 + 48) = 7;
  if ( v3 > 1 )
    RaidUnitUnRegisterInterfaces(a1);
  *(_BYTE *)(a1 + 160) &= ~1u;
  RaidUnitCancelPendingRequests(a1);
  RaUnitReleaseRemoveLock(a1);
  v5 = RaUnitWaitForRemoveLock(a1);
  return RaidCompleteRequestEx(a2, 0, v5);
}
