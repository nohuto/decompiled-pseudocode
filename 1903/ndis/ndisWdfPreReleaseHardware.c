/*
 * XREFs of ndisWdfPreReleaseHardware @ 0x1C0119350
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C009EEA0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisPowerSaveStop @ 0x1C0014940 (ndisPowerSaveStop.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ndisWakeUpDevice @ 0x1C00774C0 (ndisWakeUpDevice.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00A50AC (ndisPnPRemoveDeviceEx.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C00C2854 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C8E5C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisWdfPreReleaseHardware(__int64 a1)
{
  unsigned int v1; // edi
  bool v3; // zf

  v1 = 0;
  ndisLogMiniportEvent(a1, 0x23u);
  if ( (*(_DWORD *)(a1 + 120) & 4) == 0 )
  {
    NdisTraceLoggingDeviceRemoved();
    ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a1, NdisSSDeviceRemove);
    KeWaitForSingleObject((PVOID)(a1 + 4216), Executive, 0, 0, 0LL);
    if ( (*(_DWORD *)(a1 + 124) & 0x100) == 0 && *(int *)(a1 + 3868) > 1 )
      v1 = ndisWakeUpDevice(a1);
    ndisReferenceMiniportNoCheck(a1, 0x1Eu);
  }
  if ( !*(_DWORD *)(a1 + 4440) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v3 = *(_DWORD *)(a1 + 1520) == 5;
  *(_DWORD *)(a1 + 1524) = 1;
  if ( !v3 )
    ndisPnPRemoveDeviceEx(a1);
  return v1;
}
