/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x1C002255C
 * Callers:
 *     RaidUnitPoFxIdleComponent @ 0x1C00076A8 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007ACC (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000DE48 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidpAdapterDpcRoutine @ 0x1C0010540 (RaidpAdapterDpcRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00139D0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidPnPPassToMiniPort @ 0x1C00144F4 (RaidPnPPassToMiniPort.c)
 *     RaidUnitFreeResources @ 0x1C001A4C8 (RaidUnitFreeResources.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C001B1C0 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001B7F8 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00385B4 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C0038D70 (RaidAdapterRequestDirectComplete.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00399A4 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0039E74 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortAdapterPoFxD0Completion @ 0x1C00439A0 (StorPortAdapterPoFxD0Completion.c)
 *     StorPortUnitIdleState @ 0x1C0043E00 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0044150 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C0044418 (StorPortUnitPowerNotRequiredStep2.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0045DB8 (RaidCompleteMiniportRequestCallback.c)
 *     RaWmiPassToMiniPort @ 0x1C006FFF4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0072E30 (RaidAdapterDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterPoFxIdleComponent(__int64 a1, __int64 a2, __int64 a3)
{
  PoFxIdleComponent(**(_QWORD **)(a1 + 5152), a2, a3);
  return (*(_BYTE *)(*(_QWORD *)(a1 + 5152) + 20LL) & 1) == 0;
}
