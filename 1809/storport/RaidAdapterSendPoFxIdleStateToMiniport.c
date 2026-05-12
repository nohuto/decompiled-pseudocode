/*
 * XREFs of RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0042910
 * Callers:
 *     StorPortAdapterIdleState @ 0x1C0043800 (StorPortAdapterIdleState.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0016D38 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxIdleStateToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 312);
  return v2;
}
