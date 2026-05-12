/*
 * XREFs of RaidUnitSendPowerToMiniport @ 0x1C0010A94
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C001071C (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006860 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0015214 (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPowerToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 3) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL, 3LL);
  return v2;
}
