/*
 * XREFs of RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003F5C0
 * Callers:
 *     StorPortAdapterIdleState @ 0x1C0040490 (StorPortAdapterIdleState.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B98 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterSendPoFxIdleStateToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
