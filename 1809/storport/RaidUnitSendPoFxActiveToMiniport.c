/*
 * XREFs of RaidUnitSendPoFxActiveToMiniport @ 0x1C00432DC
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C00072D0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleCondition @ 0x1C0007450 (StorPortUnitIdleCondition.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0007578 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0019BDC (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxActiveToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 312LL);
  return v2;
}
