/*
 * XREFs of RaidAdapterSendPowerToMiniport @ 0x1C0025D8C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0013050 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0016AD0 (RaidAdapterStopOnPowerdown.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0016D38 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPowerToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 312);
  return v2;
}
