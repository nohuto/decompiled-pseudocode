/*
 * XREFs of RaUnitAdapterRemove @ 0x1C0046570
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0007578 (RaidIsUnitControlSupported.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0016D78 (RaUnitWaitForRemoveLock.c)
 *     RaCallMiniportUnitControl @ 0x1C0019BDC (RaCallMiniportUnitControl.c)
 *     RaidDeleteUnit @ 0x1C001A750 (RaidDeleteUnit.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitAdapterRemove(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) != 5 )
  {
    *(_DWORD *)(a1 + 48) = 6;
    RaUnitWaitForRemoveLock(a1);
    if ( RaidIsUnitControlSupported(a1, 9) )
      RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 312LL);
    RaidDeleteUnit(a1);
  }
  return 0LL;
}
