/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x140702314
 * Callers:
 *     PiCreateDriverSwDevices @ 0x1406FED60 (PiCreateDriverSwDevices.c)
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x1406FF4E0 (PiUpdateDevicePanel.c)
 *     PnpSaveDeviceCapabilities @ 0x140703A2C (PnpSaveDeviceCapabilities.c)
 *     PiQueryRemovableDeviceOverride @ 0x1407127B4 (PiQueryRemovableDeviceOverride.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x14085EB68 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
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
