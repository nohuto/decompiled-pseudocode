/*
 * XREFs of PipIsDevNodeDNStarted @ 0x140007294
 * Callers:
 *     PipSetDevNodeState @ 0x140159DB8 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14015ACA0 (PipRestoreDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14059C36C (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiDevCfgConfigureDevice @ 0x1406E2E54 (PiDevCfgConfigureDevice.c)
 *     PnpCheckForActiveDependencies @ 0x1406E6BA0 (PnpCheckForActiveDependencies.c)
 *     PnpProcessDependencyRelations @ 0x1406EC8B0 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1406ECD68 (PnpRequestDeviceRemovalWorker.c)
 *     PiDevCfgLogDeviceStarted @ 0x1406F36B8 (PiDevCfgLogDeviceStarted.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407630D0 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x14083B688 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
