/*
 * XREFs of RaUnitQueryPnpDeviceStateIrp @ 0x1C006A980
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00082C0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaUnitIsSMRDisabled @ 0x1C00144B8 (RaUnitIsSMRDisabled.c)
 */

__int64 __fastcall RaUnitQueryPnpDeviceStateIrp(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9

  if ( a1[229] || a1[230] || a1[231] )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (unsigned int)RaUnitIsSMRDisabled((__int64)a1) )
    *(_DWORD *)(v3 + 56) |= 2u;
  return RaidCompleteRequestEx((PIRP)v3, 0, v2);
}
