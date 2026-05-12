/*
 * XREFs of RaidAdapterSendPowerToMiniport @ 0x1C0022BC8
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0015EA0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0018750 (RaidAdapterStopOnPowerdown.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015AF8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B64 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterSendPowerToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
