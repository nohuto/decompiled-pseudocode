/*
 * XREFs of RaidUnitSendPoFxIdleStateToMiniport @ 0x1C00413F8
 * Callers:
 *     StorPortUnitIdleState @ 0x1C0041BB0 (StorPortUnitIdleState.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00068B0 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C00152A4 (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxIdleStateToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
  return v2;
}
