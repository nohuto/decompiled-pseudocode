/*
 * XREFs of RaidAdapterPoFxActivateComponent @ 0x1C001ED80
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F4C (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000610C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0009408 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0010588 (RaidUnitSetDevicePowerIrp.c)
 *     RaidCreateUnit @ 0x1C0015258 (RaidCreateUnit.c)
 *     RaidPnPPassToMiniPort @ 0x1C00169C8 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0035620 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0035AF0 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C003A494 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x1C0040630 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     StorPortUnitIdleState @ 0x1C00407C0 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C0041218 (StorPortUnitPowerRequiredStep2.c)
 *     RaWmiPassToMiniPort @ 0x1C006E888 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C007224C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0073524 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterPoFxActivateComponent(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(char *)(a1 + 108) < 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5336));
    if ( (*(_BYTE *)(a1 + 109) & 1) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5344));
  }
  if ( *(_DWORD *)(a1 + 92) && (a3 & 1) != 0 )
    a3 = (unsigned int)a3 | 4;
  PoFxActivateComponent(**(_QWORD **)(a1 + 5024), a2, a3);
  return *(_DWORD *)(*(_QWORD *)(a1 + 5024) + 20LL) & 1;
}
