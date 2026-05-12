/*
 * XREFs of RaidAdapterSendPoFxActiveToMiniport @ 0x1C001EA78
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C001E920 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C001E9E0 (StorPortAdapterIdleCondition.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B98 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterSendPoFxActiveToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
