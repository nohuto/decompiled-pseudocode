/*
 * XREFs of RaUnitAdapterRemove @ 0x1C0044E20
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00068B0 (RaidIsUnitControlSupported.c)
 *     RaidDeleteUnit @ 0x1C001242C (RaidDeleteUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C00152A4 (RaCallMiniportUnitControl.c)
 *     RaUnitWaitForRemoveLock @ 0x1C001736C (RaUnitWaitForRemoveLock.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitAdapterRemove(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) != 5 )
  {
    *(_DWORD *)(a1 + 48) = 6;
    RaUnitWaitForRemoveLock(a1);
    if ( RaidIsUnitControlSupported(a1, 9) )
      RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
    RaidDeleteUnit(a1);
  }
  return 0LL;
}
