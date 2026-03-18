/*
 * XREFs of HUBPDO_SignalPnpPowerEvent @ 0x1C0017778
 * Callers:
 *     HUBDSM_FlushingPnpEventsForBootDevice @ 0x1C001B9F0 (HUBDSM_FlushingPnpEventsForBootDevice.c)
 *     HUBDSM_ConfiguredSuspended @ 0x1C001BF10 (HUBDSM_ConfiguredSuspended.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C001C020 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1C001C080 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_RequestingCyclePortAndCompletingPnpEventOnFailureInUnconfigured @ 0x1C001C360 (HUBDSM_RequestingCyclePortAndCompletingPnpEventOnFailureInUnconfigured.c)
 *     HUBDSM_SignalingPnpPowerEventOnStopEnable @ 0x1C001CEC0 (HUBDSM_SignalingPnpPowerEventOnStopEnable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPDO_SignalPnpPowerEvent(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 1576) = 0;
  KeSetEvent((PRKEVENT)(a1 + 1584), 0, 0);
  result = *(unsigned int *)(a1 + 1636);
  if ( (result & 0x40) != 0 )
  {
    result = 0LL;
    *(_QWORD *)(a1 + 1516) = 0LL;
    *(_QWORD *)(a1 + 1524) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFBF);
  }
  return result;
}
