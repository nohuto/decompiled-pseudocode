/*
 * XREFs of RaUnitAdapterRemove @ 0x1C0043A30
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006860 (RaidIsUnitControlSupported.c)
 *     RaidDeleteUnit @ 0x1C0012390 (RaidDeleteUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C0015214 (RaCallMiniportUnitControl.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0015AD4 (RaUnitWaitForRemoveLock.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
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
