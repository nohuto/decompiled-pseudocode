/*
 * XREFs of RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0043368
 * Callers:
 *     StorPortUnitIdleState @ 0x1C0043E00 (StorPortUnitIdleState.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0007578 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0019BDC (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxIdleStateToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 312LL);
  return v2;
}
