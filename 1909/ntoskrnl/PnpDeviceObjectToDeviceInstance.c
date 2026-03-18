/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x1407040F4
 * Callers:
 *     PiCreateDriverSwDevices @ 0x140700B40 (PiCreateDriverSwDevices.c)
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x1407012C0 (PiUpdateDevicePanel.c)
 *     PnpSaveDeviceCapabilities @ 0x14070580C (PnpSaveDeviceCapabilities.c)
 *     PiQueryRemovableDeviceOverride @ 0x140714594 (PiQueryRemovableDeviceOverride.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x14085E268 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1405C3010 (_CmOpenDeviceRegKey.c)
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
