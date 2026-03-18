/*
 * XREFs of PipIsDevNodeDNStarted @ 0x1400EE53C
 * Callers:
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x140173CB4 (PipRestoreDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406A2CEC (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiDevCfgLogDeviceStarted @ 0x1406FB8EC (PiDevCfgLogDeviceStarted.c)
 *     PnpCheckForActiveDependencies @ 0x140702C8C (PnpCheckForActiveDependencies.c)
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     PnpProcessDependencyRelations @ 0x14072F35C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140731698 (PnpRequestDeviceRemovalWorker.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140788FD4 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x1408767AC (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
