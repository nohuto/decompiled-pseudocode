/*
 * XREFs of RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003F644
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0022760 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C0022BA0 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B98 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
