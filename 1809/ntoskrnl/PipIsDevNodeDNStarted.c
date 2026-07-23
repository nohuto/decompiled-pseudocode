/*
 * XREFs of PipIsDevNodeDNStarted @ 0x140007294
 * Callers:
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14015ADC0 (PipRestoreDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14059D36C (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 *     PnpCheckForActiveDependencies @ 0x1406E7E20 (PnpCheckForActiveDependencies.c)
 *     PnpProcessDependencyRelations @ 0x1406EDB30 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1406EDFE8 (PnpRequestDeviceRemovalWorker.c)
 *     PiDevCfgLogDeviceStarted @ 0x1406F4938 (PiDevCfgLogDeviceStarted.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407642A0 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x14083C8C8 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
