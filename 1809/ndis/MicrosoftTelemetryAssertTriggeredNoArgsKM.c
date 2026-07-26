/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00836E8
 * Callers:
 *     ndisFreeReceiveQueue @ 0x1C003B594 (ndisFreeReceiveQueue.c)
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C004A7B0 (ndisMUpdateNameOnPMWakePacket.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0076BF8 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00B8374 (ndisQuerySetMiniportDeviceState.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00C47CC (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00F52B0 (ndisWdfPreReleaseHardware.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0083704 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgsKM()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr);
}
