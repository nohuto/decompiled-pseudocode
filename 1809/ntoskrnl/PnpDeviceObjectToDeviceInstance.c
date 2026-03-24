/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x1406EB4A0
 * Callers:
 *     PnpSaveDeviceCapabilities @ 0x1406E2870 (PnpSaveDeviceCapabilities.c)
 *     PiUpdateDevicePanel @ 0x1406E9A1C (PiUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x1406EAB18 (PipProcessStartPhase3.c)
 *     PiCreateDriverSwDevices @ 0x1406EB4FC (PiCreateDriverSwDevices.c)
 *     PiQueryRemovableDeviceOverride @ 0x1406FFD78 (PiQueryRemovableDeviceOverride.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x140824718 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1405C6EF0 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && (v5 = *(_QWORD *)(v4 + 48)) != 0 )
    return CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v5, 16, 0, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
