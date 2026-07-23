/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x1406EC740
 * Callers:
 *     PnpSaveDeviceCapabilities @ 0x1406E3B10 (PnpSaveDeviceCapabilities.c)
 *     PiUpdateDevicePanel @ 0x1406EACBC (PiUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x1406EBDB8 (PipProcessStartPhase3.c)
 *     PiCreateDriverSwDevices @ 0x1406EC79C (PiCreateDriverSwDevices.c)
 *     PiQueryRemovableDeviceOverride @ 0x140701018 (PiQueryRemovableDeviceOverride.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x140825918 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
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
