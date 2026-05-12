/*
 * XREFs of RaidAdapterSendPowerToMiniport @ 0x1C0022A98
 * Callers:
 *     RaidAdapterStopOnPowerdown @ 0x1C0015EE0 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0016690 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B98 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterSendPowerToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
