/*
 * XREFs of PipIsDevNodeDNStarted @ 0x1400D4DF4
 * Callers:
 *     PipSetDevNodeState @ 0x140145D2C (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1401743E4 (PipRestoreDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406701CC (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiDevCfgLogDeviceStarted @ 0x1406FD6CC (PiDevCfgLogDeviceStarted.c)
 *     PnpCheckForActiveDependencies @ 0x140704A6C (PnpCheckForActiveDependencies.c)
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 *     PnpProcessDependencyRelations @ 0x1407315BC (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1407338F8 (PnpRequestDeviceRemovalWorker.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x14078B434 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x140875EAC (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
