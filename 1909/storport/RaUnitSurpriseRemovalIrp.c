/*
 * XREFs of RaUnitSurpriseRemovalIrp @ 0x1C006D74C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006B30 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00068B0 (RaidIsUnitControlSupported.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00079F0 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaCallMiniportUnitControl @ 0x1C00152A4 (RaCallMiniportUnitControl.c)
 *     RaUnitWaitForRemoveLock @ 0x1C001736C (RaUnitWaitForRemoveLock.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C0019C50 (RaidUnitUnRegisterInterfaces.c)
 *     RaidUnitConvertToZombieUnit @ 0x1C0019CCC (RaidUnitConvertToZombieUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0019D8C (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitCancelPendingRequests @ 0x1C0019DF0 (RaidUnitCancelPendingRequests.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitSurpriseRemovalIrp(__int64 a1, IRP *a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a1 + 48) - 6;
  *(_DWORD *)(a1 + 48) = 5;
  if ( v2 > 1 )
    RaidUnitUnRegisterInterfaces(a1);
  RaidUnitCancelPendingRequests(a1);
  if ( RaidIsUnitControlSupported(a1, 10) )
    RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
  RaUnitReleaseRemoveLock(a1);
  RaUnitWaitForRemoveLock(a1);
  RaUnitDeregisterFromIdleDetection(a1);
  RaidUnitConvertToZombieUnit(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
