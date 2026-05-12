/*
 * XREFs of RaidAdapterSendPoFxActiveToMiniport @ 0x1C001F8C8
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C001F770 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C001F830 (StorPortAdapterIdleCondition.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015AF8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B64 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterSendPoFxActiveToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
