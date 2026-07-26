/*
 * XREFs of ndisWdfPreReleaseHardware @ 0x1C00F52B0
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00F2320 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C007D640 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00836E8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ndisPowerSaveStop @ 0x1C00B8DB0 (ndisPowerSaveStop.c)
 *     ndisWakeUpDevice @ 0x1C00E8E08 (ndisWakeUpDevice.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00F4F94 (ndisPnPRemoveDeviceEx.c)
 */

__int64 __fastcall ndisWdfPreReleaseHardware(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // edi
  bool v3; // zf

  v1 = 0;
  ndisLogMiniportEvent((__int64)a1, 0x23u);
  if ( (a1->Flags & 4) == 0 )
  {
    NdisTraceLoggingDeviceRemoved();
    ndisPowerSaveStop(a1, 2);
    KeWaitForSingleObject(&a1->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
    if ( (a1->PnPFlags & 0x100) == 0 && a1->CurrentDevicePowerState > PowerDeviceD0 )
      v1 = ndisWakeUpDevice((__int64)a1);
    ndisReferenceMiniportNoCheck((__int64)a1, 0x1Eu);
  }
  if ( !a1->Ref.ReferenceCount )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v3 = a1->PnPDeviceState == NdisPnPDeviceRemoved;
  a1->OldPnPDeviceState = NdisPnPDeviceStarted;
  if ( !v3 )
    ndisPnPRemoveDeviceEx(a1);
  return v1;
}
