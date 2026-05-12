/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x1C001FB94
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F30 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000615C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00065D8 (RaidUnitPoFxIdleComponent.c)
 *     RaidStartIoPacket @ 0x1C0008210 (RaidStartIoPacket.c)
 *     RaidpAdapterDpcRoutine @ 0x1C000ED40 (RaidpAdapterDpcRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0011FF0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidUnitFreeResources @ 0x1C00124B4 (RaidUnitFreeResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C0016918 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001C234 (RaidAdapterStartDeviceIrp.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C001ECD0 (RaidpAdapterRedirectDpcRoutine.c)
 *     StorPortAdapterPoFxD0Completion @ 0x1C00232C0 (StorPortAdapterPoFxD0Completion.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C003558C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C0035D58 (RaidAdapterRequestDirectComplete.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0036A18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0036EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortUnitIdleState @ 0x1C0041BB0 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0041F10 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C00421F8 (StorPortUnitPowerNotRequiredStep2.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0044440 (RaidCompleteMiniportRequestCallback.c)
 *     RaWmiPassToMiniPort @ 0x1C006FAE8 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0073120 (RaidAdapterDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterPoFxIdleComponent(__int64 a1, __int64 a2, __int64 a3)
{
  PoFxIdleComponent(**(_QWORD **)(a1 + 5024), a2, a3);
  return (*(_BYTE *)(*(_QWORD *)(a1 + 5024) + 20LL) & 1) == 0;
}
